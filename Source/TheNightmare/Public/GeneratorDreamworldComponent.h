#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESkillCheckCustomType.h"
#include "GeneratorDreamworldComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UGeneratorDreamworldComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> _beamSocketsForBloodEffect;
    
public:
    UGeneratorDreamworldComponent();
private:
    UFUNCTION()
    void OnRepairSkillCheckFailed(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float chargeChange);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnPlayerFailSkillCheck(ADBDPlayer* player);
    
};

