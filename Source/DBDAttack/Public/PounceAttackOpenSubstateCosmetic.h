#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PounceAttackOpenSubstateCosmetic.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable)
class UPounceAttackOpenSubstateCosmetic : public UObject {
    GENERATED_BODY()
public:
    UPounceAttackOpenSubstateCosmetic();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnLungeAttackStartCosmetic(ADBDPlayer* slasherPlayer);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnLungeAttackEndCosmetic(ADBDPlayer* slasherPlayer);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnLocallyObservedChangedCosmetic(ADBDPlayer* slasherPlayer);
    
private:
    UFUNCTION()
    void OnLocallyObservedChanged(ADBDPlayer* slasherPlayer);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLungeAttackAugmented(ADBDPlayer* slasherPlayer) const;
    
};

