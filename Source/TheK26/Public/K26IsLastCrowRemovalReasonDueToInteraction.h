#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "FK26AttachedCrowRemovalReason.h"
#include "K26IsLastCrowRemovalReasonDueToInteraction.generated.h"

class AK26AttachedCrow;
class UK26PowerStatusHandlerComponent;
class ACamperPlayer;
class ASlasherPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK26IsLastCrowRemovalReasonDueToInteraction : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_OwningAttachedCrow)
    AK26AttachedCrow* _owningAttachedCrow;
    
    UPROPERTY(Export, Transient)
    UK26PowerStatusHandlerComponent* _statusHandlerComponent;
    
public:
    UK26IsLastCrowRemovalReasonDueToInteraction();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnSurvivorStatusIndicatorSet(AK26AttachedCrow* attachedCrow);
    
    UFUNCTION()
    void OnRep_OwningAttachedCrow();
    
    UFUNCTION()
    void OnLastRemovalReasonSet(FK26AttachedCrowRemovalReason lastCrowRemovalReason);
    
    UFUNCTION()
    void Authority_OnSurvivorStatusIndicatorSet(const ACamperPlayer* survivor, AK26AttachedCrow* attachedCrow);
    
    UFUNCTION()
    void Authority_OnKillerSet(ASlasherPlayer* killer);
    
};

