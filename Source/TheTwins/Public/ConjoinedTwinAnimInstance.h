#pragma once
#include "CoreMinimal.h"
#include "EInteractionAnimation.h"
#include "PlayerAnimInstance.h"
#include "EAttackSubstate.h"
#include "ConjoinedTwinAnimInstance.generated.h"

class UTwinLockerBlockerComponent;
class UDBDAttackerComponent;
class AConjoinedTwin;
class UTwinAttachmentComponent;

UCLASS(NonTransient)
class UConjoinedTwinAnimInstance : public UPlayerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    AConjoinedTwin* _owningConjoinedTwin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _firstPersonView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _forwardVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _lateralVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionAnimation _interactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isInAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _idleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isAttacking;
    
    UPROPERTY(Export, Transient)
    UDBDAttackerComponent* _attackerComponent;
    
    UPROPERTY(Export, Transient)
    UTwinAttachmentComponent* _twinAttachmentComponent;
    
    UPROPERTY(Export, Transient)
    UTwinLockerBlockerComponent* _twinLockerBlockerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _animYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _animPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isSpectator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _animDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _animSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isAttachedToSister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isAttachedToSurvivor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isAttachedToFemaleSurvivor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isChargingTwinJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isPossessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isWakingUpFromPossess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isDormant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isBeingAutoPossessedAfterRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isAttachedToLocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttackSubstate _attackState;
    
public:
    UConjoinedTwinAnimInstance();
protected:
    UFUNCTION(BlueprintPure)
    AConjoinedTwin* GetOwningConjoinedTwin() const;
    
};

