#include "LoudNoise.h"

ALoudNoise::ALoudNoise() {
    this->_loudNoiseMinDistance = 1000.00f;
    this->_loudNoiseLifetime = 6.00f;
    this->_heightToAddToLoudNoiseLocation = 125.00f;
    this->_loudNoiseDecalDistance = 150.00f;
    this->_cameraDecalDistance = 100.00f;
}

