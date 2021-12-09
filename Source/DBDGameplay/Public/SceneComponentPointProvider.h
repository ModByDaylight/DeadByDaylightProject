#pragma once
#include "CoreMinimal.h"
#include "PointsProvider.h"
#include "Engine/EngineTypes.h"
#include "SceneComponentPointProvider.generated.h"

class USceneComponent;

UCLASS(EditInlineNew)
class DBDGAMEPLAY_API USceneComponentPointProvider : public UPointsProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FComponentReference _sceneReference;
    
    UPROPERTY(Export, Transient)
    USceneComponent* _sceneComponent;
    
public:
    USceneComponentPointProvider();
};

