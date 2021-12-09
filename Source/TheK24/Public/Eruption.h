#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Eruption.generated.h"

class ADBDPlayer;
class AGenerator;

UCLASS()
class UEruption : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<AGenerator*> _server_highlightedGenerators;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsPerkEnabled)
    bool _isPerkEnabled;
    
    UPROPERTY(EditDefaultsOnly)
    float _generatorRegressPercentage[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _survivorImposedStatusEffectDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _perkCooldownDuration[3];
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float _screamRevealLocationDuration;
    
    UFUNCTION()
    void OnRep_IsPerkEnabled();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_TriggerPerk(const TArray<AGenerator*>& explodingGenerators);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_HighlightGenerator(AGenerator* generator);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void MakeSurvivorScreamCosmetic(const ADBDPlayer* screamingSurvivor);
    
    UFUNCTION(BlueprintPure)
    float GetScreamRevealLocationDuration() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnGeneratorHighlightStart(AGenerator* highlightedGenerator);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnGeneratorHighlightEnd(AGenerator* highlightedGenerator);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UEruption();
};

