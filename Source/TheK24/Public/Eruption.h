#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Eruption.generated.h"

class AGenerator;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
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
    
public:
    UEruption();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
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
    
};

