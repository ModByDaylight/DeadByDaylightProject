#pragma once
#include "CoreMinimal.h"
#include "EAkMidiEventType.h"
#include "AkMidiEventBase.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAkMidiEventType Type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Chan;
    
    AKAUDIO_API FAkMidiEventBase();
};

