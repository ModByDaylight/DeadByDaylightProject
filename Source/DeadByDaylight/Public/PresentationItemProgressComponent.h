#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PresentationItemProgressComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPresentationItemProgressComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPresentationItemProgressComponent();
};

