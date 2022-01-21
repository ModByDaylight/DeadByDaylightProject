#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AkObservedPlayerSoundLoop.h"
#include "KillerFlashlightSFXComponent.generated.h"

class UFlashlightTargetFXComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UKillerFlashlightSFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAkObservedPlayerSoundLoop _targetSoundLoop;
    
private:
    UPROPERTY(Export, Transient)
    TArray<UFlashlightTargetFXComponent*> _flashlightTargets;
    
public:
    UKillerFlashlightSFXComponent();
};

