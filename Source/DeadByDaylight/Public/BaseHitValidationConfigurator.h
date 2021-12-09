#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseHitValidationConfigurator.generated.h"

UCLASS(Abstract)
class UBaseHitValidationConfigurator : public UActorComponent {
    GENERATED_BODY()
public:
    UBaseHitValidationConfigurator();
};

