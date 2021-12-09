#include "BTService_FindInteractor_Exit.h"

UBTService_FindInteractor_Exit::UBTService_FindInteractor_Exit() {
    this->Filter = EFindInteractorExitOptions::All;
    this->OpenCondition = EFindInteractorOpenConditions::AllGate_OpenedHatch;
    this->ClosedDoorOffset = -500.00f;
    this->OpenDoorOffset = 500.00f;
}

