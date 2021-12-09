#pragma once
#include "CoreMinimal.h"
#include "AkMidiEventBase.h"
#include "AkMidiChannelAftertouch.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiChannelAftertouch : public FAkMidiEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Value;
    
    AKAUDIO_API FAkMidiChannelAftertouch();
};

