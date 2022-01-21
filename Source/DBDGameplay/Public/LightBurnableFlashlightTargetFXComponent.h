#pragma once
#include "CoreMinimal.h"
#include "FlashlightTargetFXComponent.h"
#include "LightBurnableFlashlightTargetFXComponent.generated.h"

class ULightBurnable;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API ULightBurnableFlashlightTargetFXComponent : public UFlashlightTargetFXComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    ULightBurnable* _burnable;
    
public:
    ULightBurnableFlashlightTargetFXComponent();
};

