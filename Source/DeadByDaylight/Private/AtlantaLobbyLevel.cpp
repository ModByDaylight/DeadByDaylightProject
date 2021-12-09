#include "AtlantaLobbyLevel.h"

class AActor;

void AAtlantaLobbyLevel::OnFrontPawnSpawned(AActor* forefrontPawn) {
}

void AAtlantaLobbyLevel::OnBackPawnSpawned(AActor* backgroundPawn) {
}

AAtlantaLobbyLevel::AAtlantaLobbyLevel() {
    this->_offlineLobbyCamera = NULL;
    this->_roleSelectionLobbyCameraPosition = NULL;
    this->_characterSelectionLobbyCameraPosition = NULL;
    this->_loadoutSelectionLobbyCameraPosition = NULL;
}

