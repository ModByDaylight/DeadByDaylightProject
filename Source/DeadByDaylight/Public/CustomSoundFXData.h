#pragma once
#include "CoreMinimal.h"
#include "EAudioCustomizationCategory.h"
#include "CustomSoundFXData.generated.h"

USTRUCT(BlueprintType)
struct FCustomSoundFXData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAudioCustomizationCategory AudioCategory;
    
    UPROPERTY(EditAnywhere)
    FString SwitchState;
    
    DEADBYDAYLIGHT_API FCustomSoundFXData();
};

