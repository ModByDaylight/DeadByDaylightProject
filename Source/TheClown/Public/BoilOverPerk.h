#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "BoilOverPerk.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBoilOverPerk : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _additionnalWigglingProgressWhenFalling[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _greatHeightsValue;
    
public:
    UBoilOverPerk();
private:
    UFUNCTION()
    void Authority_OnWiggleEnd();
    
    UFUNCTION()
    void Authority_OnPlayerPickedUpEnd(ADBDPlayer* picker);
    
};

