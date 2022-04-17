#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "GameEventData.h"
#include "ReleaseConjoinedTwin.generated.h"

class AConjoinedTwin;
class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UReleaseConjoinedTwin : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _releaseMaxCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _releaseExitTime;
    
    UPROPERTY(ReplicatedUsing=OnRep_ReleaseAnimationWentToTheEnd)
    bool _releaseAnimationWentToTheEnd;
    
public:
    UReleaseConjoinedTwin();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnTwinSet(AConjoinedTwin* twin);
    
    UFUNCTION()
    void OnRep_ReleaseAnimationWentToTheEnd();
    
    UFUNCTION()
    void OnPowerCollected(ADBDPlayer* collector);
    
    UFUNCTION()
    void OnKillerStunned(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnReleaseTwinInteractionUpdateStart(ADBDPlayer* sister, AConjoinedTwin* brother);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnReleaseTwinInteractionUpdate(ADBDPlayer* sister, AConjoinedTwin* brother, float deltaTime);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnReleaseChargeComplete(ADBDPlayer* sister, AConjoinedTwin* brother);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnReleaseCancelled(ADBDPlayer* sister, AConjoinedTwin* brother);
    
};

