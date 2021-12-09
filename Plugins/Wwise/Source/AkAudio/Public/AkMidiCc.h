#pragma once
#include "CoreMinimal.h"
#include "AkMidiEventBase.h"
#include "EAkMidiCcValues.h"
#include "AkMidiCc.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiCc : public FAkMidiEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAkMidiCcValues Cc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Value;
    
    AKAUDIO_API FAkMidiCc();
};

