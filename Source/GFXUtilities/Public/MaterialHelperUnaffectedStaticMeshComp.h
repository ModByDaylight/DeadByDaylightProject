#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "MaterialHelperUnaffectedStaticMeshComp.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UMaterialHelperUnaffectedStaticMeshComp : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UMaterialHelperUnaffectedStaticMeshComp();
};

