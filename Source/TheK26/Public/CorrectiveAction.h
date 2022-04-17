#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Perk.h"
#include "CorrectiveAction.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCorrectiveAction : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _startingTokens[3];
    
    UPROPERTY(EditDefaultsOnly)
    FName _statusEffectName;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer _allowedInteractionSemanticsForToken;
    
public:
    UCorrectiveAction();
};

