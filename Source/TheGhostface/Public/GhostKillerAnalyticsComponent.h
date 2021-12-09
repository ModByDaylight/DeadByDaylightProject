#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GhostKillerAnalytics.h"
#include "ELeanState.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "GhostKillerAnalyticsComponent.generated.h"

class UChargeableComponent;

UCLASS()
class UGhostKillerAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    FGhostKillerAnalytics _ghostKillerAnalytics;
    
    UFUNCTION()
    void Local_OnStalkModeChanged(bool isInStalkMode);
    
    UFUNCTION()
    void Local_OnLeanStateChanged(ELeanState leanState);
    
    UFUNCTION()
    void Local_OnIsStealthChanged(bool isStealth);
    
    UFUNCTION()
    void Authority_OnStalkChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);
    
    UFUNCTION()
    void Authority_OnPreAttackSuccess(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UGhostKillerAnalyticsComponent();
};

