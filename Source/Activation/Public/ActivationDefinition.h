#pragma once
#include "CoreMinimal.h"
#include "EActivationStrategy.h"
#include "GameplayTagContainer.h"
#include "ActivationDefinition.generated.h"

USTRUCT(BlueprintType)
struct ACTIVATION_API FActivationDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EActivationStrategy _activationStrategy;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer _activationTags;
    
public:
    FActivationDefinition();
};

