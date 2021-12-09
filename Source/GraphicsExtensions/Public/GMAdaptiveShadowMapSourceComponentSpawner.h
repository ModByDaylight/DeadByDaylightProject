#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GMAdaptiveShadowMapSourceComponentSpawner.generated.h"

UCLASS()
class GRAPHICSEXTENSIONS_API AGMAdaptiveShadowMapSourceComponentSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCreateASMSourceComponentOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRemoveCastForCinematicOnlyFlagOnLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRemoveLightFunctionMaterialOnLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumLevelPerSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumPreGeneratedLevelPerSource;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bPreviewOnly;
    
    AGMAdaptiveShadowMapSourceComponentSpawner();
};

