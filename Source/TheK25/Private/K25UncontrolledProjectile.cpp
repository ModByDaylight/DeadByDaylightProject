#include "K25UncontrolledProjectile.h"
#include "Net/UnrealNetwork.h"

void AK25UncontrolledProjectile::OnRep_TargetSurvivor() {
}


void AK25UncontrolledProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AK25UncontrolledProjectile, _targetSurvivor);
}

AK25UncontrolledProjectile::AK25UncontrolledProjectile() {
    this->_isAcquiredFromPool = false;
    this->_targetSurvivor = NULL;
}

