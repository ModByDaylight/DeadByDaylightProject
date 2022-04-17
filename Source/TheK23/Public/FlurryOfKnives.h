#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "FlurryOfKnives.generated.h"

class UCurveFloat;
class UStatusEffect;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UFlurryOfKnives : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_NumOfStacksReduction)
    int32 _replicatedNumOfStacksReduction;
    
    UPROPERTY(Replicated)
    bool _isSuperModeThrow;
    
    UPROPERTY(Export, Replicated)
    UStatusEffect* _selfSlowEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _flurryOfKnivesEnterDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _flurryOfKnivesExitDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _chargeTime;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _baseTimeBetweenThrows;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _throwRateModifierByKnivesThrown;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _superModeThrowRateModifier;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _knivesLaunchSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _convergencePointDistance;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _coneOfFireAngleCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _consecutiveKnivesStacksDecayTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _maxConsecutiveKnivesStacks;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _movementSpeedByKnivesThrown;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _superModeBaseMovementSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _baseWalkSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _recoilIntensityByKnivesThrown;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _recoilDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _recoilAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _maximumRecoilAngleVariation;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _rotationSpeedAdjustmentTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _aimingStanceRotationYawScaleAdjustment;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _aimingStanceRotationPitchScaleAdjustment;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _throwingRotationYawScaleAdjustment;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _throwingRotationPitchScaleAdjustment;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _aimingStanceGamepadRotationYawScaleAdjustment;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _aimingStanceGamepadRotationPitchScaleAdjustment;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _throwingGamepadRotationYawScaleAdjustment;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _throwingGamepadRotationPitchScaleAdjustment;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _aimingGamepadPitchCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _aimingGamepadYawCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _throwingGamepadPitchCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _throwingGamepadYawCurve;
    
public:
    UFlurryOfKnives();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_StartThrowing();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DecreaseConsecutiveKnivesStacks();
    
    UFUNCTION()
    void OnRep_NumOfStacksReduction();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StartThrowing();
    
};

