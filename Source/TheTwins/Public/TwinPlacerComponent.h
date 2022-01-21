#pragma once
#include "CoreMinimal.h"
#include "ObjectPlacerComponent.h"
#include "TwinPlacerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinPlacerComponent : public UObjectPlacerComponent {
    GENERATED_BODY()
public:
    UTwinPlacerComponent();
};

