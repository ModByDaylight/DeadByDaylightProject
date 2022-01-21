#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GMAdaptiveShadowMapSource.generated.h"

class UGMAdaptiveShadowMapAtlas;
class ULightComponent;

UCLASS(Abstract)
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapSource : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGMAdaptiveShadowMapAtlas* _atlas;
    
    UPROPERTY(Export, Transient)
    ULightComponent* _lightComponent;
    
public:
    UGMAdaptiveShadowMapSource();
};

