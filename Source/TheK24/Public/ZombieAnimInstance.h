#pragma once
#include "CoreMinimal.h"
#include "EZombieGender.h"
#include "Animation/AnimInstance.h"
#include "EZombieState.h"
#include "ZombieAnimInstance.generated.h"

class AZombieCharacter;

UCLASS(NonTransient)
class UZombieAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    float _speed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EZombieState _zombieState;
    
    UPROPERTY(Transient)
    AZombieCharacter* _zombieCharacter;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isFalling;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EZombieGender _zombieGender;
    
public:
    UZombieAnimInstance();
};

