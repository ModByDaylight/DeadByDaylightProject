#pragma once
#include "CoreMinimal.h"
#include "EAkHololensAudioAPI.generated.h"

UENUM()
enum class EAkHololensAudioAPI {
    Wasapi,
    XAudio2,
    DirectSound,
};

