#include "BreakableBase.h"
#include "Components/BoxComponent.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"

class ADBDPlayer;

void ABreakableBase::PlayAudioBreakable() {
}

bool ABreakableBase::IsUnbroken() const {
    return false;
}


void ABreakableBase::Explode(ADBDPlayer* player) {
}

ABreakableBase::ABreakableBase() {
    this->_breakableCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BreakbableCollision"));
    this->_state = EBreakableState::Unbroken;
    this->_akAudioBreakable = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioBreakable"));
    this->_akAudioBreakEvent = NULL;
    this->_rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

