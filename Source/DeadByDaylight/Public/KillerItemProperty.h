#pragma once
#include "CoreMinimal.h"
#include "EGameplayElementType.h"
#include "KillerItemProperty.generated.h"

class AActor;
class UCurveFloat;

USTRUCT(BlueprintType)
struct FKillerItemProperty {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> Object;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* Population;
    
    UPROPERTY(EditAnywhere)
    EGameplayElementType _gameplayElementType;
    
public:
    DEADBYDAYLIGHT_API FKillerItemProperty();
};

