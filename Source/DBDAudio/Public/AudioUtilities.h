#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AudioUtilities.generated.h"

class UAkAudioEvent;

UCLASS(BlueprintType)
class DBDAUDIO_API UAudioUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void PostAkAudioEvent(UAkAudioEvent* audioEvent);
    
    UAudioUtilities();
};

