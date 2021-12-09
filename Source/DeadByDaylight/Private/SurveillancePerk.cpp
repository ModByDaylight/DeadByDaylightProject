#include "SurveillancePerk.h"

class ADBDPlayer;
class AGenerator;

void USurveillancePerk::HandleGeneratorIsDamagedChanged(AGenerator* generator, ADBDPlayer* player) {
}

USurveillancePerk::USurveillancePerk() {
    this->generatorRegressionStopRevealTime = 0.00f;
}

