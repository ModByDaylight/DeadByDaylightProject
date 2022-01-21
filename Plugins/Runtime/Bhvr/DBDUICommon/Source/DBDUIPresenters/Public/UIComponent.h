#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UIComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDUIPRESENTERS_API UUIComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUIComponent();
};

