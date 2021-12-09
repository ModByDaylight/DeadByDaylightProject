#pragma once
#include "CoreMinimal.h"
#include "ETheMettleOfManPhase.h"
#include "Perk.h"
#include "TheMettleOfMan.generated.h"

class UStatusEffect;

UCLASS()
class DBDCOMPETENCE_API UTheMettleOfMan : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    int32 _tokenNeededToActivate[3];
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _revealOutsideRange[3];
    
    UPROPERTY(EditDefaultsOnly)
    bool _mustBeInjured;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_NumTokenSoFar)
    int32 _numTokenSoFar;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentPhase)
    ETheMettleOfManPhase _currentPhase;
    
    UPROPERTY(Export, Transient)
    UStatusEffect* _revealToKillerEffect;
    
    UFUNCTION()
    void OnRep_NumTokenSoFar();
    
    UFUNCTION()
    void OnRep_CurrentPhase();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UTheMettleOfMan();
};

