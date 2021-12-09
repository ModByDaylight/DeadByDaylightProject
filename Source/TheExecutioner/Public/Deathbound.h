#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Deathbound.generated.h"

class ACamperPlayer;
class UStatusEffect;
class ADBDPlayer;

UCLASS()
class UDeathbound : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _distanceFromRescuedSurvivorForOblivious[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _activationDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float _rescueDistanceFromKillerToActivate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float _revealLocationDuration;
    
    UPROPERTY(EditDefaultsOnly)
    bool _unhook;
    
    UPROPERTY(EditDefaultsOnly)
    bool _fromDyingState;
    
    UPROPERTY(Export)
    TArray<UStatusEffect*> _obliviousStatusEffects;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SurvivorsToReveal)
    TArray<ADBDPlayer*> _survivorsToReveal;
    
    UFUNCTION()
    void OnRep_SurvivorsToReveal();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void MakeSurvivorScream(const ACamperPlayer* survivor);
    
public:
    UFUNCTION(BlueprintPure)
    float GetRevealLocationDuration() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UDeathbound();
};

