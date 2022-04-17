#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "InjectSerumInteraction.generated.h"

class ASlasherPlayer;
class ACamperPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UInjectSerumInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _injectSerumKillerInstinctTime;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _scoreEvent;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _serumApplyHeal;
    
public:
    UInjectSerumInteraction();
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnSurvivorCured_Cosmetic();
    
private:
    UFUNCTION()
    void OnKillerSet(ASlasherPlayer* killer);
    
protected:
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetInjectionTarget() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_CureSurvivor(ACamperPlayer* camperPlayer);
    
};

