#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "TwinJumpAudioMutedEffect.generated.h"

UCLASS()
class UTwinJumpAudioMutedEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnTwinUnmuted();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnTwinMuted();
    
public:
    UTwinJumpAudioMutedEffect();
};

