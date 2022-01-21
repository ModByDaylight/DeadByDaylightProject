#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "ClonedSkeletalMeshComponent.generated.h"

UCLASS(EditInlineNew, Transient, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UClonedSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UClonedSkeletalMeshComponent();
};

