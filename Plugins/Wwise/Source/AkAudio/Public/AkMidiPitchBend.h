#pragma once
#include "CoreMinimal.h"
#include "AkMidiEventBase.h"
#include "AkMidiPitchBend.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiPitchBend : public FAkMidiEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 ValueLsb;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 ValueMsb;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FullValue;
    
    AKAUDIO_API FAkMidiPitchBend();
};

