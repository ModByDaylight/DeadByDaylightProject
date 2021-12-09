#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "ECamperImmobilizeState.h"
#include "InnerStrength.generated.h"

UCLASS()
class DBDCOMPETENCE_API UInnerStrength : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _hideDuration[3];
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PerkEnabled)
    bool _perkEnabled;
    
    UFUNCTION()
    void OnRep_PerkEnabled();
    
    UFUNCTION()
    void OnPlayerImmobilizeStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UInnerStrength();
};

