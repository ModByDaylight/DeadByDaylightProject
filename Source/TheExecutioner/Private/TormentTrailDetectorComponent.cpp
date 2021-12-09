#include "TormentTrailDetectorComponent.h"
#include "Net/UnrealNetwork.h"

void UTormentTrailDetectorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTormentTrailDetectorComponent, _isInTormentTrail);
    DOREPLIFETIME(UTormentTrailDetectorComponent, _isInTormentTrailEffect);
}

UTormentTrailDetectorComponent::UTormentTrailDetectorComponent() {
}

