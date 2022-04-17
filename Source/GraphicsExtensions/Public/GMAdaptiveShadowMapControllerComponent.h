#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BHVRPerDetailModeInt -FallbackName=BHVRPerDetailModeInt
#include "UObject/NoExportTypes.h"
#include "GMAdaptiveShadowMapControllerComponent.generated.h"

class UGMAdaptiveShadowMapAtlas;
class UGMAdaptiveShadowMapController;
class UMaterialInterface;
class UGMAdaptiveShadowMapSourceComponent;
class UGMAdaptiveShadowMapSource;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapControllerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    //UPROPERTY(EditAnywhere)
    //FBHVRPerDetailModeInt TileSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TileCountX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TileCountY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntPoint GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GeneratedTilesPerFrame;
    
    //UPROPERTY(EditAnywhere)
    //FBHVRPerDetailModeInt MaxPreallocatedTilesPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSupportsDirectionalLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSupportsSpotLights;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    UMaterialInterface* LightFunctionMaterial;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float CullShadowIfPixelSizeLessThan;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bPreviewOnly;
    
private:
    UPROPERTY(Transient)
    UGMAdaptiveShadowMapAtlas* _atlas;
    
    UPROPERTY(Transient)
    UGMAdaptiveShadowMapController* _controller;
    
    UPROPERTY(Transient)
    TMap<UGMAdaptiveShadowMapSourceComponent*, UGMAdaptiveShadowMapSource*> _shadowMapSources;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* _lightFunctionMaterialInstance;
    
public:
    UGMAdaptiveShadowMapControllerComponent();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RebuildAtlas();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool IsControllerDonePreallocatingTiles();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 GetTileSize();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 GetTileCountY();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 GetTileCountX();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void DumpDebugInfo();
    
};

