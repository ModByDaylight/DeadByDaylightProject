#include "Glyph.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;
class AActor;

void AGlyph::OnRep_PlayersWithVisibility() {
}

bool AGlyph::DoesLocalPlayerHaveVisibility() {
    return false;
}





void AGlyph::Authority_TrackPlayerWithBehaviourID(const ADBDPlayer* dbdPlayer) {
}

void AGlyph::Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, const AActor* trackedActor) {
}

void AGlyph::Authority_OnIntroCompleted() {
}


void AGlyph::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGlyph, _playersWithVisibility);
    DOREPLIFETIME(AGlyph, _playersThatInteractedWithGlyph);
}

AGlyph::AGlyph() {
    this->_allowedPlayerType = EAllowedPlayerType::All;
}

