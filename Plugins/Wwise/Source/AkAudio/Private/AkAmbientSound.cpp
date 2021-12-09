#include "AkAmbientSound.h"

void AAkAmbientSound::StopAmbientSound() {
}

void AAkAmbientSound::StartAmbientSound() {
}

AAkAmbientSound::AAkAmbientSound() {
    this->AkAudioEvent = NULL;
    this->StopWhenOwnerIsDestroyed = true;
    this->AutoPost = false;
}

