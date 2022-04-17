#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "OnDynamicEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "EOniAttackType.h"
#include "TagStateBool.h"
#include "EInteractionAnimation.h"
#include "EAttackSubstate.h"
#include "SlasherAnimInstance.generated.h"

class ASlasherPlayer;
class UAnimMontage;
class UPortalPlacerStateComponent;
class UChargedAttackStateComponent;
class UOniDemonModeAttackStateComponent;
class UArmIKSensorComponent;
class UEvilWithinComponent;
class UFrenzyComponent;
class UPhaseWalkingComponent;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API USlasherAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnDynamicEvent OnFootTrapped;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    bool _isCrouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isRevvingChainsaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isAttackSuccessMontagePlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isCamOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isAnyMontagePlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isFrenzy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isFrenzyCD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isInParadise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _enableArmOverrideTier3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isRingingBell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isCarrying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _firstPersonCarryOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _firstPersonCarryOffsetLookingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isPassivePhaseWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isActivePhaseWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isInAir;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isVaultingToFall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isSpectator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _firstPersonView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _validSlasher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _animDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _animSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _animPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _animTurning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _animYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _pelvisHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _idleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _directionSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _leftClearFrontSpaceVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _rightClearFrontSpaceVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _rightFootEffectorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _leftFootEffectorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator _meshRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimMontage*> _attackSuccessAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimMontage*> _camOnAnimations;
    
    UPROPERTY(BlueprintReadOnly)
    ASlasherPlayer* _mySlasher;
    
    UPROPERTY(Transient)
    FTagStateBool _isVaultingToFallState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionAnimation _interactionType;
    
    UPROPERTY(Export, Transient)
    UPortalPlacerStateComponent* _demogorgonPortalPlacerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _demogorgonTeleportDuration;
    
    UPROPERTY(Export, Transient)
    UChargedAttackStateComponent* _demogorgonChargedAttackStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isDemogorgonCharging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _demogorgonChargingPercent;
    
    UPROPERTY(Export, Transient)
    UOniDemonModeAttackStateComponent* _oniAttackState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isOniCharging;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOniAttackType _oniAttackType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _oniChargeDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAttackSubstate _previousAttackSubstate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAttackSubstate _attackSubstate;
    
    UPROPERTY(Export, Transient)
    UEvilWithinComponent* _evilWithinComponent;
    
    UPROPERTY(Export, Transient)
    UFrenzyComponent* _frenzyComponent;
    
    UPROPERTY(Export, Transient)
    UPhaseWalkingComponent* _phaseWalkingComponent;
    
    UPROPERTY(Export, Transient)
    UArmIKSensorComponent* _armIKSensorComponent;
    
public:
    USlasherAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetIsCrouched(const bool value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallOnFootTrapped();
    
};

