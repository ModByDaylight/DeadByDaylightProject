#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "AnimationMontageDescriptor.h"
#include "LoProChainsAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ULoProChainsAddon : public UItemAddon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FAnimationMontageDescriptor _breakPalletMontage;
    
    UPROPERTY(EditDefaultsOnly)
    float _halfDamageDurationAfterBreakable;
    
    UPROPERTY(EditDefaultsOnly)
    bool _doesAddonIncludeBreakableWalls;
    
public:
    ULoProChainsAddon();
};

