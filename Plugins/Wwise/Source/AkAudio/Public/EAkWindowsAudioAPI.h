#pragma once
#include "CoreMinimal.h"
#include "EAkWindowsAudioAPI.generated.h"

UENUM()
enum class EAkWindowsAudioAPI {
    Wasapi,
    XAudio2,
    DirectSound,
};

