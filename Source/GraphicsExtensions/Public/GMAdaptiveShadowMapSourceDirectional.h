#pragma once
#include "CoreMinimal.h"
#include "GMAdaptiveShadowMapSource.h"
#include "GMAdaptiveShadowMapSourceDirectional.generated.h"

class UDirectionalLightComponent;

UCLASS()
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapSourceDirectional : public UGMAdaptiveShadowMapSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UDirectionalLightComponent* _directionalLightComponent;
    
public:
    UGMAdaptiveShadowMapSourceDirectional();
};

