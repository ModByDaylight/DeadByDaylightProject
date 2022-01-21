#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "ECamperImmobilizeState.h"
#include "InnerStrength.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UInnerStrength : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _hideDuration[3];
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PerkEnabled)
    bool _perkEnabled;
    
public:
    UInnerStrength();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_PerkEnabled();
    
    UFUNCTION()
    void OnPlayerImmobilizeStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState);
    
};

