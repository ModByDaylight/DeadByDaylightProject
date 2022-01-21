#pragma once
#include "CoreMinimal.h"
#include "SleepingAnimInstance.h"
#include "EscapeDoorAnimInstance.generated.h"

class UAkAudioEvent;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API UEscapeDoorAnimInstance : public USleepingAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isOpen;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isOpenByKiller;
    
public:
    UEscapeDoorAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetIsOpenByKiller(const bool isOpenByKiller);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOpen(bool isOpen);
    
    UFUNCTION(BlueprintCallable)
    void PlaySound(UAkAudioEvent* akEvent);
    
};

