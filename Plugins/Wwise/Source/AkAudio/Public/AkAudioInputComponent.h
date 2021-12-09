#pragma once
#include "CoreMinimal.h"
#include "AkComponent.h"
#include "AkAudioInputComponent.generated.h"

UCLASS(Abstract)
class AKAUDIO_API UAkAudioInputComponent : public UAkComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 PostAssociatedAudioInputEvent();
    
    UAkAudioInputComponent();
};

