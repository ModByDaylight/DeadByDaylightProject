#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InterpolationDoneEventDelegate.h"
#include "LightingInterpolator.generated.h"

class UExponentialHeightFogComponent;
class ABaseSky;
class USkyLightComponent;
class ULightComponent;

UCLASS(BlueprintType)
class ULightingInterpolator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FInterpolationDoneEvent OnInterpolationDone;
    
private:
    UPROPERTY(Transient)
    ABaseSky* _targetLighting;
    
public:
    ULightingInterpolator();
    UFUNCTION(BlueprintCallable)
    static void LerpSkylight(USkyLightComponent* Target, USkyLightComponent* A, USkyLightComponent* B, float alpha);
    
    UFUNCTION(BlueprintCallable)
    static void LerpLight(ULightComponent* Target, ULightComponent* A, ULightComponent* B, float alpha);
    
    UFUNCTION(BlueprintCallable)
    static void LerpHeightFog(UExponentialHeightFogComponent* Target, UExponentialHeightFogComponent* A, UExponentialHeightFogComponent* B, float alpha);
    
};

