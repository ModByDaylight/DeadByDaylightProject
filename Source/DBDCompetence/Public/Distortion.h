#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Distortion.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDistortion : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _activationDurations[3];
    
    UPROPERTY(ReplicatedUsing=OnRep_AuraBlockIsActive)
    bool _auraBlockIsActive;
    
public:
    UDistortion();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_AuraBlockIsActive();
    
public:
    UFUNCTION(BlueprintPure)
    bool AuraBlockCanBeActive() const;
    
};

