#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "K26P02.generated.h"

class AGenerator;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK26P02 : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _generatorRegressPercentage[3];
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float _screamRevealLocationDuration;
    
public:
    UK26P02();
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_TriggerPerk(AGenerator* explodingGenerator);
    
protected:
    UFUNCTION(BlueprintPure)
    float GetScreamRevealLocationDuration() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_MakeSurvivorScream(const ADBDPlayer* screamingSurvivor);
    
private:
    UFUNCTION()
    void Authority_OnSurvivorHookedOnScourgeHook(const FGameEventData& gameEventData);
    
};

