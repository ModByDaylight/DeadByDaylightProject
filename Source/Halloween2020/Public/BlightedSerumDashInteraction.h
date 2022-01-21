#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "BlightedSerumDashInteraction.generated.h"

class UBlightedSerumCooldownInteraction;
class UBlightedSerumCollisionInteraction;
class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2020_API UBlightedSerumDashInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UBlightedSerumCooldownInteraction* _cooldownInteraction;
    
    UPROPERTY(Export, Transient)
    UBlightedSerumCollisionInteraction* _collisionInteraction;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _dashSpeedCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _lookAngleToTurnRateCurveController;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _lookAngleToTurnRateCurveMouse;
    
    UPROPERTY(EditDefaultsOnly)
    float _dashDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float _vectorInterpToSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float _wallDashAccelerationMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float _cameraPitchRecenterTime;
    
    UPROPERTY(EditDefaultsOnly)
    float _lookAngleTurnRateModifier;
    
    UPROPERTY(EditDefaultsOnly)
    float _wallDashCollisionRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float _wallDashCollisionHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float _wallDashCollisionRange;
    
public:
    UBlightedSerumDashInteraction();
    UFUNCTION(BlueprintCallable)
    void SetCooldownInteraction(UBlightedSerumCooldownInteraction* cooldownInteraction);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionInteraction(UBlightedSerumCollisionInteraction* collisionInteraction);
    
};

