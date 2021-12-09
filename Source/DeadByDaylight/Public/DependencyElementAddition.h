#pragma once
#include "CoreMinimal.h"
#include "ETileSpawnPointType.h"
#include "DependencyElementAddition.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDependencyElementAddition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> _object;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETileSpawnPointType _type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _numberToAdd;
    
public:
    DEADBYDAYLIGHT_API FDependencyElementAddition();
};

