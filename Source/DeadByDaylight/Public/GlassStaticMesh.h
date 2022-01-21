#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "GlassStaticMesh.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGlassStaticMesh : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector defaultGlassNormalVector;
    
    UGlassStaticMesh();
};

