#pragma once
#include "CoreMinimal.h"
#include "BatchMeshCommands.h"
#include "MeshCloningFactory.generated.h"

UCLASS(NotPlaceable, Transient, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UMeshCloningFactory : public UBatchMeshCommands {
    GENERATED_BODY()
public:
    UMeshCloningFactory();
};

