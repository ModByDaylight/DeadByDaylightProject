#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SlasherAttackPickerComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USlasherAttackPickerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USlasherAttackPickerComponent();
};

