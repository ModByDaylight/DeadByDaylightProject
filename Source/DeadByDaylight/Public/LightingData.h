#pragma once
#include "CoreMinimal.h"
#include "SceneLightingDescription.h"
#include "Engine/DataAsset.h"
#include "LightingData.generated.h"

class AActor;
class ABaseSky;

UCLASS()
class DEADBYDAYLIGHT_API ULightingData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<ABaseSky> DefaultLighting;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<ABaseSky> DefaultAtlantaLighting;
    
    UPROPERTY(EditAnywhere)
    TArray<FSceneLightingDescription> Descriptions;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AActor> AdaptiveShadowMapControllersActor;
    
public:
    ULightingData();
};

