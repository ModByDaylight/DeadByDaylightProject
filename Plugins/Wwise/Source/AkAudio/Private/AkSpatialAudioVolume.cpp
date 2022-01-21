#include "AkSpatialAudioVolume.h"
#include "AkSurfaceReflectorSetComponent.h"
#include "AkLateReverbComponent.h"
#include "AkRoomComponent.h"

AAkSpatialAudioVolume::AAkSpatialAudioVolume() {
    this->SurfaceReflectorSet = CreateDefaultSubobject<UAkSurfaceReflectorSetComponent>(TEXT("SurfaceReflector"));
    this->LateReverb = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("LateReverb"));
    this->Room = CreateDefaultSubobject<UAkRoomComponent>(TEXT("Room"));
}

