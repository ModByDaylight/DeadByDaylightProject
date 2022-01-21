#include "SurveillancePerk.h"

class AGenerator;
class ADBDPlayer;

void USurveillancePerk::HandleGeneratorIsDamagedChanged(AGenerator* generator, ADBDPlayer* player) {
}

USurveillancePerk::USurveillancePerk() {
    this->generatorRegressionStopRevealTime = 0.00f;
}

