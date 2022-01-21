#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HeightFogGradientEntry -FallbackName=HeightFogGradientEntry
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
    
    UPROPERTY()
    TArray<FHeightFogGradientEntry> FogGradient;
    
    UPROPERTY()
    float DistanceUntilFlatFog;
    
    UPROPERTY()
    float DistanceUntilNoFog;
    
    DEADBYDAYLIGHT_API FDirectionalHeightFogInterpolationValues();
};

