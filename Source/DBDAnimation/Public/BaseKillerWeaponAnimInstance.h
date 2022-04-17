#pragma once
#include "CoreMinimal.h"
#include "EAttackSubstate.h"
#include "Animation/AnimInstance.h"
#include "AnimSequenceSelector.h"
#include "BaseKillerWeaponAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API UBaseKillerWeaponAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttackSubstate _attackState;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isCarrying;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isActive;
    
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
    UBaseKillerWeaponAnimInstance();
};

