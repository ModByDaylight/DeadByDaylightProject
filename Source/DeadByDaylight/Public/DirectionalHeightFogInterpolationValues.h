#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine HeightFogGradientEntry
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
    
    DEADBYDAYLIGHT_API FDirectionalHeightFogInterpolationValues();
};

