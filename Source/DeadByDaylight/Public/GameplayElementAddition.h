#pragma once
#include "CoreMinimal.h"
#include "EGameplayElementType.h"
#include "GameplayElementAddition.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FGameplayElementAddition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> _elementToAdd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayElementType _spawnerType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _numberToAdd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _numberToAddAffectedByOffering;
    
public:
    DEADBYDAYLIGHT_API FGameplayElementAddition();
};

