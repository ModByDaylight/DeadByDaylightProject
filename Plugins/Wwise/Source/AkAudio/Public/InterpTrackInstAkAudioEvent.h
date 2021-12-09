#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "InterpTrackInstAkAudioEvent.generated.h"

UCLASS(MinimalAPI)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float LastUpdatePosition;
    
    UInterpTrackInstAkAudioEvent();
};

