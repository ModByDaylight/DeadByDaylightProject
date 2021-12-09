#pragma once
#include "CoreMinimal.h"
#include "AkAudioType.h"
#include "AkGroupValue.generated.h"

UCLASS()
class AKAUDIO_API UAkGroupValue : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 GroupShortID;
    
    UAkGroupValue();
};

