#include "CharacterCollection.h"

class ACamperPlayer;
class ASlasherPlayer;
class ADBDPlayer;

TSet<ACamperPlayer*> UCharacterCollection::GetSurvivors() const {
    return TSet<ACamperPlayer*>();
}

TSet<ADBDPlayer*> UCharacterCollection::GetMainDBDPlayers() const {
    return TSet<ADBDPlayer*>();
}

ASlasherPlayer* UCharacterCollection::GetKiller() const {
    return NULL;
}

TArray<ADBDPlayer*> UCharacterCollection::GetAllDBDPlayers() const {
    return TArray<ADBDPlayer*>();
}

UCharacterCollection::UCharacterCollection() {
    this->_killer = NULL;
}

