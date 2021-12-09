#include "AkSpatialAudioSettings.h"

FAkSpatialAudioSettings::FAkSpatialAudioSettings() {
    this->MaxSoundPropagationDepth = 0;
    this->DiffractionFlags = 0;
    this->MovementThreshold = 0.00f;
    this->NumberOfPrimaryRays = 0;
    this->ReflectionOrder = 0;
    this->EnableDiffractionOnReflections = false;
    this->EnableDirectPathDiffraction = false;
    this->MaximumPathLength = 0.00f;
    this->EnableTransmission = false;
}

