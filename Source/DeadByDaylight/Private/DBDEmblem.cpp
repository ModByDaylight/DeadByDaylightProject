#include "DBDEmblem.h"
#include "Net/UnrealNetwork.h"

void UDBDEmblem::Client_FinalizeReplication_Implementation(const float points, const TArray<FProgressionPoints>& progressionPoints) {
}

void UDBDEmblem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDBDEmblem, _points);
    DOREPLIFETIME(UDBDEmblem, _progressionPoints);
}

UDBDEmblem::UDBDEmblem() {
    this->_points = 0.00f;
}

