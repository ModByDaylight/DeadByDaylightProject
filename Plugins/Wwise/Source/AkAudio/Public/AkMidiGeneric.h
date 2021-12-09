#pragma once
#include "CoreMinimal.h"
#include "AkMidiEventBase.h"
#include "AkMidiGeneric.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiGeneric : public FAkMidiEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Param1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Param2;
    
    AKAUDIO_API FAkMidiGeneric();
};

