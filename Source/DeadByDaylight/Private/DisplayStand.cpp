#include "DisplayStand.h"

class AActor;

void ADisplayStand::OnCurrentActorDestroyed(AActor* destroyedActor) {
}

ADisplayStand::ADisplayStand() {
    this->_currentActorDisplayed = NULL;
    this->_currentActorDisplayedClass = NULL;
    this->_nextActorToDisplayClass = NULL;
    this->_useOffsetMenuAnimations = false;
    this->_displayDummyCharacter = false;
}

