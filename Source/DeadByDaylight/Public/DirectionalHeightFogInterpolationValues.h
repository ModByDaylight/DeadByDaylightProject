#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HeightFogGradientEntry -FallbackName=HeightFogGradientEntry
#include "UObject/NoExportTypes.h"
#include "DirectionalHeightFogInterpolationValues.generated.h"

USTRUCT()
struct FDirectionalHeightFogInterpolationValues {
    GENERATED_BODY()
public:
    UPROPERTY()
    float FogDensity;
    
    UPROPERTY()
    FLinearColor FogInscatteringColor;
    
    UPROPERTY()
    float DirectionalInscatteringExponent;
    
    UPROPERTY()
    float DirectionalInscatteringStartDistance;
    
    UPROPERTY()
    FLinearColor DirectionalInscatteringColor;
    
    UPROPERTY()
    float FogHeightFalloff;
    
    UPROPERTY()
    float FogMaxOpacity;
    
    UPROPERTY()
    float StartDistance;
    
    //UPROPERTY()
    //TArray<FHeightFogGradientEntry> FogGradient;
    
    UPROPERTY()
    float DistanceUntilFlatFog;
    
    UPROPERTY()
    float DistanceUntilNoFog;
    
    UPROPERTY()
    bool bEnableVolumetricFog;
    
    UPROPERTY()
    float VolumetricFogScatteringDistribution;
    
    UPROPERTY()
    FColor VolumetricFogAlbedo;
    
    UPROPERTY()
    FLinearColor VolumetricFogEmissive;
    
    UPROPERTY()
    float VolumetricFogExtinctionScale;
    
    UPROPERTY()
    float VolumetricFogDistance;
    
    UPROPERTY()
    float VolumetricFogStaticLightingScatteringIntensity;
    
    UPROPERTY()
    bool bOverrideLightColorsWithFogInscatteringColors;
    
    DEADBYDAYLIGHT_API FDirectionalHeightFogInterpolationValues();
};

