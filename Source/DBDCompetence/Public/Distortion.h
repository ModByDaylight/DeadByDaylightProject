#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Distortion.generated.h"

UCLASS()
class UDistortion : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _activationDurations[3];
    
    UPROPERTY(ReplicatedUsing=OnRep_AuraBlockIsActive)
    bool _auraBlockIsActive;
    
    UFUNCTION()
    void OnRep_AuraBlockIsActive();
    
public:
    UFUNCTION(BlueprintPure)
    bool AuraBlockCanBeActive() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UDistortion();
};

