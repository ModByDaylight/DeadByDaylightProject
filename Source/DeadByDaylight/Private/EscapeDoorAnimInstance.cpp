#include "EscapeDoorAnimInstance.h"

class UAkAudioEvent;

void UEscapeDoorAnimInstance::SetIsOpenByKiller(const bool isOpenByKiller) {
}

void UEscapeDoorAnimInstance::SetIsOpen(bool isOpen) {
}

void UEscapeDoorAnimInstance::PlaySound(UAkAudioEvent* akEvent) {
}

UEscapeDoorAnimInstance::UEscapeDoorAnimInstance() {
    this->_isOpen = false;
    this->_isOpenByKiller = false;
}

