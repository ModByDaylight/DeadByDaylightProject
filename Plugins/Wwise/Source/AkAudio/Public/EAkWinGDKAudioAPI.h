#pragma once
#include "CoreMinimal.h"
#include "EAkWinGDKAudioAPI.generated.h"

UENUM()
enum class EAkWinGDKAudioAPI {
    Wasapi,
    XAudio2,
    DirectSound,
};

