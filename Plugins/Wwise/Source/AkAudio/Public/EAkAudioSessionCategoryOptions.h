#pragma once
#include "CoreMinimal.h"
#include "EAkAudioSessionCategoryOptions.generated.h"

UENUM()
enum class EAkAudioSessionCategoryOptions {
    MixWithOthers,
    DuckOthers,
    AllowBluetooth,
    DefaultToSpeaker,
};

