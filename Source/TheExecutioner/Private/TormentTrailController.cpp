#include "TormentTrailController.h"
#include "Net/UnrealNetwork.h"

class ATormentTrailPoint;

void ATormentTrailController::Server_SpawnTormentTrailPoint_Implementation(ATormentTrailPoint* trailPoint, const FVector_NetQuantize10 location, const FRotator rotation) {
}
bool ATormentTrailController::Server_SpawnTormentTrailPoint_Validate(ATormentTrailPoint* trailPoint, const FVector_NetQuantize10 location, const FRotator rotation) {
    return true;
}

void ATormentTrailController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATormentTrailController, _trailPointList);
}

ATormentTrailController::ATormentTrailController() {
    this->_mobileTormentTrailRenderer = NULL;
}

