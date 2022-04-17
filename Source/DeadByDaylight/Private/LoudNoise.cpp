#include "LoudNoise.h"
#include "Components/DecalComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"

ALoudNoise::ALoudNoise() {
    this->_toInfinityDecal = CreateDefaultSubobject<UDecalComponent>(TEXT("ToInfinityDecal"));
    this->_distortionParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DistortionParticleSystem"));
    this->_ak_audio_loudNoise = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_Audio_LoudNoise"));
    this->_rootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->_loudNoiseMinDistance = 1000.00f;
    this->_loudNoiseLifetime = 6.00f;
    this->_heightToAddToLoudNoiseLocation = 125.00f;
    this->_loudNoiseDecalDistance = 150.00f;
    this->_cameraDecalDistance = 100.00f;
}

