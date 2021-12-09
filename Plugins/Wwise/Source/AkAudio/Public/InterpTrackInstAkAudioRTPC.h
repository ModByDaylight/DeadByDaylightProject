#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "InterpTrackInstAkAudioRTPC.generated.h"

UCLASS()
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float LastUpdatePosition;
    
    UInterpTrackInstAkAudioRTPC();
};

