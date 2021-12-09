#pragma once
#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "EffectCameraTypeSettings.generated.h"

USTRUCT(BlueprintType)
struct FEffectCameraTypeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECustomizationCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool VisibilityInFirstPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool VisibilityInThirdPerson;
    
    DEADBYDAYLIGHT_API FEffectCameraTypeSettings();
};

