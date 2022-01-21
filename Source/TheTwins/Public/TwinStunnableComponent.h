#pragma once
#include "CoreMinimal.h"
#include "StunnableComponent.h"
#include "TwinStunnableComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinStunnableComponent : public UStunnableComponent {
    GENERATED_BODY()
public:
    UTwinStunnableComponent();
};

