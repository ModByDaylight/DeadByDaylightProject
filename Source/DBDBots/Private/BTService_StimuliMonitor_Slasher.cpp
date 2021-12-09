#include "BTService_StimuliMonitor_Slasher.h"

UBTService_StimuliMonitor_Slasher::UBTService_StimuliMonitor_Slasher() {
    this->IgnorePreviousChasedStimulusActorDelay = 15.00f;
    this->DefaultStimulusToInvestigateMaxAge = 30.00f;
    this->KOStimulusToInvestigateMaxAge = 45.00f;
    this->NextStimulusInvestigationMinRange = 800.00f;
    this->CantSeeOverBlindRatio = 0.25f;
    this->FavorizeStandingTargetInRange = 1000.00f;
    this->FavorizeStandingTargetOutRange = 1500.00f;
}

