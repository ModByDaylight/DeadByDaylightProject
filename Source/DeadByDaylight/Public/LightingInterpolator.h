#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LightingInterpolator.generated.h"

class ULightComponent;
class USkyLightComponent;
class UExponentialHeightFogComponent;
class ABaseSky;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLightingInterpolatorOnInterpolationDone);

UCLASS(BlueprintType)
class ULightingInterpolator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FLightingInterpolatorOnInterpolationDone OnInterpolationDone;
    
private:
    UPROPERTY(Transient)
    ABaseSky* _targetLighting;
    
public:
    UFUNCTION(BlueprintCallable)
    static void LerpSkylight(USkyLightComponent* Target, USkyLightComponent* A, USkyLightComponent* B, float alpha);
    
    UFUNCTION(BlueprintCallable)
    static void LerpLight(ULightComponent* Target, ULightComponent* A, ULightComponent* B, float alpha);
    
    UFUNCTION(BlueprintCallable)
    static void LerpHeightFog(UExponentialHeightFogComponent* Target, UExponentialHeightFogComponent* A, UExponentialHeightFogComponent* B, float alpha);
    
    ULightingInterpolator();
};

