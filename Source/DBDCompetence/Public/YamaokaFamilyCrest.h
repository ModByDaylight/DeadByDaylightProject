#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "YamaokaFamilyCrest.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UYamaokaFamilyCrest : public UItemAddon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _revealDuration;
    
private:
    UPROPERTY(EditAnywhere)
    float _revealRange;
    
    UPROPERTY(Replicated, Transient)
    TArray<ACamperPlayer*> _survivorsToReveal;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AddonActivationCount)
    uint8 _addonActivationCount;
    
public:
    UYamaokaFamilyCrest();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void RevealSurvivor(ACamperPlayer* survivorToReveal);
    
private:
    UFUNCTION()
    void OnRep_AddonActivationCount();
    
};

