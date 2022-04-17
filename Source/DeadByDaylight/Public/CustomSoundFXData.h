#pragma once
#include "CoreMinimal.h"
#include "EAudioCustomizationCategory.h"
#include "CustomSoundFXData.generated.h"

USTRUCT(BlueprintType)
struct FCustomSoundFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAudioCustomizationCategory AudioCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SwitchState;
    
    DEADBYDAYLIGHT_API FCustomSoundFXData();
};

