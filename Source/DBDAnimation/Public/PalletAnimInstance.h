#pragma once
#include "CoreMinimal.h"
#include "SleepingAnimInstance.h"
#include "AnimSequenceSelector.h"
#include "PalletAnimInstance.generated.h"

class ASlasherPlayer;

UCLASS(NonTransient)
class DBDANIMATION_API UPalletAnimInstance : public USleepingAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _isPulledDown;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isBeingPulledUp;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isBeingDestroyed;
    
    UPROPERTY(BlueprintReadOnly)
    float _isBeingDestroyedPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimSequenceSelector _destroyPalletAnim;
    
public:
    UPalletAnimInstance();
private:
    UFUNCTION()
    void OnKillerSet(ASlasherPlayer* killer);
    
};

