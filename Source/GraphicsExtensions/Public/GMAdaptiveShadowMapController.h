#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GMAdaptiveShadowMapController.generated.h"

class UGMAdaptiveShadowMapAtlas;
class UMaterialInterface;
class UGMAdaptiveShadowMapSource;

UCLASS()
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGMAdaptiveShadowMapAtlas* _atlas;
    
    UPROPERTY(Transient)
    UMaterialInterface* _lightFunctionMaterial;
    
    UPROPERTY(Transient)
    TArray<UGMAdaptiveShadowMapSource*> _shadowMapSourceList;
    
    UPROPERTY(Transient)
    TArray<UGMAdaptiveShadowMapSource*> _shadowMapSourceActivatedList;
    
public:
    UGMAdaptiveShadowMapController();
};

