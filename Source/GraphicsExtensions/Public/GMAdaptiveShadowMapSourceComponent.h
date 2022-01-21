#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "GMAdaptiveShadowMapSourceComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapSourceComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bUseAutoRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float DepthMin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float DepthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PreGeneratedLevels;
    
    UGMAdaptiveShadowMapSourceComponent();
    UFUNCTION(BlueprintCallable)
    void SetLightRadiusWithBounds(FVector BoundingSphereCenter, float BoundingSphereRadius);
    
};

