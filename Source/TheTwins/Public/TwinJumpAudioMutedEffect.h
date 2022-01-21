#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "TwinJumpAudioMutedEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinJumpAudioMutedEffect : public UStatusEffect {
    GENERATED_BODY()
public:
    UTwinJumpAudioMutedEffect();
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnTwinUnmuted();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnTwinMuted();
    
};

