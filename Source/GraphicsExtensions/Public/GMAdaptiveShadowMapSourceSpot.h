#pragma once
#include "CoreMinimal.h"
#include "GMAdaptiveShadowMapSource.h"
#include "GMAdaptiveShadowMapSourceSpot.generated.h"

class USpotLightComponent;

UCLASS()
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapSourceSpot : public UGMAdaptiveShadowMapSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    USpotLightComponent* _spotLightComponent;
    
public:
    UGMAdaptiveShadowMapSourceSpot();
};

