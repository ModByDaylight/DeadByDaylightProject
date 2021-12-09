#pragma once
#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "GameplayTagContainer.h"
#include "LingeringStateTagStatusEffect.generated.h"

UCLASS()
class DBDCOMPETENCE_API ULingeringStateTagStatusEffect : public UBaseLingeringStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _ownerStateTag;
    
public:
    ULingeringStateTagStatusEffect();
};

