#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WalesCypherParameters.generated.h"

UCLASS()
class UWalesCypherParameters : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString AUDIO_EVENT;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SLASHER_INDEX;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CAMPER_INDEX;
    
    UWalesCypherParameters();
};

