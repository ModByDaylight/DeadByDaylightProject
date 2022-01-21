#include "TestMovableActor.h"
#include "Components/BoxComponent.h"

ATestMovableActor::ATestMovableActor() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
}

