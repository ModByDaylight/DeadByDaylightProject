#include "AimPointPerlinNoise.h"
#include "Net/UnrealNetwork.h"

void UAimPointPerlinNoise::SetNoiseFrequencyMultiplier(const float multiplier) {
}

void UAimPointPerlinNoise::SetNoiseAmplitudeMultiplier(const float multiplier) {
}

void UAimPointPerlinNoise::SetBaseInaccuracyNoisePersistence(const float noisePersistence) {
}

void UAimPointPerlinNoise::SetBaseInaccuracyNoiseOctaveCount(const int32 octaveCount) {
}

void UAimPointPerlinNoise::SetBaseInaccuracyNoiseFrequency(const float frequency) {
}

void UAimPointPerlinNoise::SetBaseInaccuracyNoiseAmplitude(const float amplitude) {
}

void UAimPointPerlinNoise::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAimPointPerlinNoise, _timeOffset);
}

UAimPointPerlinNoise::UAimPointPerlinNoise() {
    this->_baseInaccuracyNoisePersistence = 0.50f;
    this->_baseInaccuracyNoiseOctaveCount = 3;
    this->_baseInaccuracyNoiseAmplitude = 100.00f;
    this->_baseInaccuracyNoiseFrequency = 0.50f;
    this->_timeOffset = 0.00f;
}

