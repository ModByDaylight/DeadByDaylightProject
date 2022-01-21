#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "CapsulePlayerOverlapComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCapsulePlayerOverlapComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UCapsulePlayerOverlapComponent();
};

