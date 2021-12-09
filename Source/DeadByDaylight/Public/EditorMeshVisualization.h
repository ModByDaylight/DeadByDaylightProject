#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "EditorMeshVisualization.generated.h"

class USkeletalMesh;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UEditorMeshVisualization : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> MeshVisualization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform RelativeTransform;
    
    UEditorMeshVisualization();
};

