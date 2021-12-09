#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "InfectiousFright.generated.h"

class ACamperPlayer;

UCLASS()
class DBDCOMPETENCE_API UInfectiousFright : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool _revealPlayerInTerrorRadius;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PerkActivationCount)
    uint8 _perkActivationCount;
    
    UPROPERTY(Replicated, Transient)
    TArray<ACamperPlayer*> _revealedSurvivors;
    
    UPROPERTY(Transient)
    ACamperPlayer* _targetSurvivor;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void RevealSurvivorLocation(ACamperPlayer* target);
    
private:
    UFUNCTION()
    void OnRep_PerkActivationCount();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UInfectiousFright();
};

