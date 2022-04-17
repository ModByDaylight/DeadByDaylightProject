#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "AudioCustomMeshComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDAUDIO_API UAudioCustomMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UAudioCustomMeshComponent();
};

