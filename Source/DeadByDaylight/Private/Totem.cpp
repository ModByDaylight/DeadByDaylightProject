#include "Totem.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;



void ATotem::OnTotemBlockChanged() {
}

void ATotem::OnRep_TotemState(const ETotemState oldTotemState) {
}

void ATotem::OnLocallyObservedChanged() {
}



bool ATotem::IsTotemBlockedForPlayer(const ADBDPlayer* player) const {
    return false;
}

bool ATotem::IsBoundToPerk() const {
    return false;
}

ETotemState ATotem::GetTotemState() const {
    return ETotemState::Cleansed;
}



float ATotem::GetBoonTotemBlessingRange() const {
    return 0.0f;
}

float ATotem::GetBoonTotemAuraRevealRange() const {
    return 0.0f;
}

FLinearColor ATotem::GetBoonAuraRevealColor() const {
    return FLinearColor{};
}


void ATotem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATotem, _boundPerks);
    DOREPLIFETIME(ATotem, _totemState);
}

ATotem::ATotem() {
    this->_totemState = ETotemState::Dull;
    this->_interactionsAttachPoint = NULL;
    this->_canBeBoundToBoonPerk = true;
}

