#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "EditorActorVisualization.generated.h"

class AActor;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UEditorActorVisualization : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> ActorVisualization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform RelativeTransform;
    
    UEditorActorVisualization();
};

