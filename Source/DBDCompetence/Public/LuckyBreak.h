#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "ECamperDamageState.h"
#include "LuckyBreak.generated.h"

UCLASS(Abstract)
class DBDCOMPETENCE_API ULuckyBreak : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _activationTime[3];
    
    UFUNCTION()
    void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);
    
    UFUNCTION()
    void ActivationTimerEnded();
    
public:
    ULuckyBreak();
};

