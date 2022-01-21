#pragma once
#include "CoreMinimal.h"
#include "BaseKillerAnimInstance.h"
#include "TunableStat.h"
#include "K26AbilitySubAnimInstance.generated.h"

UCLASS(NonTransient)
class THEK26_API UK26AbilitySubAnimInstance : public UBaseKillerAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float _fireInteractionCooldownTime;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _fireInteractionCooldownTimeTunable;
    
    UPROPERTY(BlueprintReadOnly)
    bool _hasChargingStarted;
    
    UPROPERTY(BlueprintReadOnly)
    bool _hasProjectileBeenSummoned;
    
    UPROPERTY(BlueprintReadOnly)
    bool _hasChargingEnded;
    
    UPROPERTY(BlueprintReadOnly)
    bool _hasProjectileFired;
    
public:
    UK26AbilitySubAnimInstance();
    UFUNCTION()
    void OnHasProjectileFired();
    
    UFUNCTION()
    void OnHasProjectileBeenSummoned(const int32 remainingAmmo, const int32 maxAmmo);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeHasProjectileFired();
    
    UFUNCTION(BlueprintCallable)
    void ConsumeHasProjectileBeenSummoned();
    
};

