#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GunslingerEffectsComponent.generated.h"

class AHarpoonRifle;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGunslingerEffectsComponentOnIsAimingChanged, bool, isAiming);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGunslingerEffectsComponentPlayOutOfAmmoSound);

UCLASS()
class THEGUNSLINGER_API UGunslingerEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGunslingerEffectsComponentOnIsAimingChanged OnIsAimingChanged;
    
    UPROPERTY(BlueprintAssignable)
    FGunslingerEffectsComponentPlayOutOfAmmoSound PlayOutOfAmmoSound;
    
protected:
    UPROPERTY(EditAnywhere)
    float _minimumTimeBetweenBroadcast;
    
private:
    UPROPERTY(Transient)
    AHarpoonRifle* _rifle;
    
    UFUNCTION()
    void OnItemUsedStateChanged(bool isPressed);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_PlayOutOfAmmoSound();
    
public:
    UGunslingerEffectsComponent();
};

