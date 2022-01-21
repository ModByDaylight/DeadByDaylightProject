#pragma once
#include "CoreMinimal.h"
#include "ClonedMeshComponent.h"
#include "ClonedMeshComponentTranslucentOutline.generated.h"

UCLASS(NonTransient, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UClonedMeshComponentTranslucentOutline : public UClonedMeshComponent {
    GENERATED_BODY()
public:
    UClonedMeshComponentTranslucentOutline();
};

