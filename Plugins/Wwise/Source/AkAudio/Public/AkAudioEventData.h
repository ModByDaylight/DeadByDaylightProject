#pragma once
#include "CoreMinimal.h"
#include "AkAssetDataSwitchContainer.h"
#include "AkAudioEventData.generated.h"

class UAkTrigger;
class UAkAuxBus;
class UAkAudioEvent;
class UAkGroupValue;

UCLASS(BlueprintType)
class AKAUDIO_API UAkAudioEventData : public UAkAssetDataSwitchContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float MaxAttenuationRadius;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsInfinite;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float MinimumDuration;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float MaximumDuration;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FString, UAkAssetDataSwitchContainer*> LocalizedMedia;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSet<UAkAudioEvent*> PostedEvents;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSet<UAkAuxBus*> UserDefinedSends;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSet<UAkTrigger*> PostedTriggers;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSet<UAkGroupValue*> GroupValues;
    
    UAkAudioEventData();
};

