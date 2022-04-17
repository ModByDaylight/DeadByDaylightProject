#pragma once
#include "CoreMinimal.h"
#include "PlayerAnimInstance.h"
#include "EAttackSubstate.h"
#include "AnimSequenceSelector.h"
#include "BasePlayerAttackSubAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API UBasePlayerAttackSubAnimInstance : public UPlayerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttackSubstate _attackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _strafeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isStrafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _attackInPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimSequenceSelector _attackIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _attackSwingPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimSequenceSelector _attackSwing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _attackMissPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimSequenceSelector _attackMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _attackHitPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimSequenceSelector _attackHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _attackBounceOfWallPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimSequenceSelector _attackBounceOfWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _firstPersonView;
    
public:
    UBasePlayerAttackSubAnimInstance();
};

