#include "ChaserCharacterComponent.h"
#include "Net/UnrealNetwork.h"
#include "DBDPawnSensingComponent.h"

class ACamperPlayer;
class APawn;

void UChaserCharacterComponent::OnKillerLocallyObservedChanged(bool locallyObserved) {
}

void UChaserCharacterComponent::Multicast_OnChaseStart_Implementation(ACamperPlayer* survivor) {
}

void UChaserCharacterComponent::Multicast_OnChaseEnd_Implementation(ACamperPlayer* survivor, const FChaseUpdateInfo chaseUpdateInfo) {
}

void UChaserCharacterComponent::Multicast_OnAllChaseEnd_Implementation() {
}

void UChaserCharacterComponent::Authority_OnChaseTargetFound(APawn* pawn) {
}

void UChaserCharacterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UChaserCharacterComponent, _chasedPlayers);
}

UChaserCharacterComponent::UChaserCharacterComponent() {
    this->_camperSensor = CreateDefaultSubobject<UDBDPawnSensingComponent>(TEXT("CamperSensor"));
}

