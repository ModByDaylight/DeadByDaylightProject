#include "FlipFlop.h"

class ADBDPlayer;

void UFlipFlop::Authority_OnPickedUp(ADBDPlayer* picker) {
}

UFlipFlop::UFlipFlop() {
    this->_recoveryProgressionConversionRatio[0] = 0.00f;
    this->_recoveryProgressionConversionRatio[1] = 0.00f;
    this->_recoveryProgressionConversionRatio[2] = 0.00f;
    this->_maxWiggleProgression[0] = 0.00f;
    this->_maxWiggleProgression[1] = 0.00f;
    this->_maxWiggleProgression[2] = 0.00f;
}

