#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "BloodDecalEffectIntensity.generated.h"

UCLASS()
class UBloodDecalEffectIntensity : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FColor IntensifyBloodColor;
    
    UPROPERTY(EditAnywhere)
    FColor IntensifyBloodColor2;
    
    UPROPERTY(EditAnywhere)
    FColor IntensifyBloodColorEmissive;
    
    UPROPERTY(EditAnywhere)
    float IntensifyBloodColorEmissiveMinimumIntensity;
    
    UPROPERTY(EditAnywhere)
    float IntensifyBloodColorEmissiveMaximumIntensity;
    
    UBloodDecalEffectIntensity();
};

