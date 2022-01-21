#pragma once
#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "GunslingerAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class UGunslingerAnimInstance : public UKillerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isAiming;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isAimingWarmup;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isAimingCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isAimingReadyToShoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isFiring;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isInMissShotCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isInSuccessShot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isLinked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isReeling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isInGunState;
    
    UPROPERTY(BlueprintReadOnly)
    float _idleToAimAnimPlayrate;
    
    UPROPERTY(BlueprintReadOnly)
    float _aimToIdleAnimPlayrate;
    
    UPROPERTY(BlueprintReadOnly)
    float _fireAnimPlayRate;
    
    UPROPERTY(BlueprintReadOnly)
    float _missShotCooldownAnimPlayRate;
    
    UPROPERTY(BlueprintReadOnly)
    float _successShotAnimPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _idleToAimAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _aimToIdleAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _fireAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _missShotCooldownAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _successShotAnim;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _idleToAimAnimDuration;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _aimToIdleAnimDuration;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _fireAnimDuration;
    
    UPROPERTY(EditAnywhere)
    FTunableStat _missShotCooldownAnimDuration;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _successShotAnimDuration;
    
public:
    UGunslingerAnimInstance();
};

