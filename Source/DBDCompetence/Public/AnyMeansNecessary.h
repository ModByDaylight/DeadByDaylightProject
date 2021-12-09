#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "AnyMeansNecessary.generated.h"

class UStatusEffect;

UCLASS(Abstract)
class DBDCOMPETENCE_API UAnyMeansNecessary : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool RevealSurvivorOnPalletPullUpStarted;
    
    UPROPERTY(EditDefaultsOnly)
    bool RevealSurvivorOnPalletPulledUp;
    
    UPROPERTY(EditDefaultsOnly)
    float RevealSurvivorDuration;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UStatusEffect> _effect;
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _cooldownDuration[3];
    
    UFUNCTION()
    void Authority_OnPalletPullUpStarted(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void Authority_OnPalletPulledUp(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);
    
public:
    UAnyMeansNecessary();
};

