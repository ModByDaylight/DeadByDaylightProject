#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/StaticMeshComponent.h"
#include "GlassStaticMesh.generated.h"

UCLASS(EditInlineNew)
class UGlassStaticMesh : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector defaultGlassNormalVector;
    
    UGlassStaticMesh();
};

