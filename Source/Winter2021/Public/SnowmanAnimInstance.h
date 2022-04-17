#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ESnowmanDestructionType.h"
#include "SnowmanAnimInstance.generated.h"

class ASnowman;
class ACamperPlayer;

UCLASS(NonTransient)
class USnowmanAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _isIdle;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isBeingEntered;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isControlled;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isDestroyed;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isBeingDestroyedDueToSurvivorRunExit;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isBeingDestroyedDueToKillerAttackWhileControlled;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isBeingDestroyedDueToKillerAttackWhileEmpty;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isSurvivorUsingSnowmanMoving;
    
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<ASnowman> _snowman;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ACamperPlayer> _survivorUsingSnowman;
    
public:
    USnowmanAnimInstance();
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnSnowmanDestroyedEvent(ESnowmanDestructionType snowmanDestructionType);
    
};

