#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "ClonedStaticMeshComponent.generated.h"

UCLASS(EditInlineNew, Transient)
class GFXUTILITIES_API UClonedStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UClonedStaticMeshComponent();
};

