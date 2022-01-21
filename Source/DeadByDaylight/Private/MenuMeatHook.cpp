#include "MenuMeatHook.h"
#include "CharmSpawnerComponent.h"


void AMenuMeatHook::BeginDestroySequence_Internal_Implementation() {
}

AMenuMeatHook::AMenuMeatHook() {
    this->_charmSpawnerComponent = CreateDefaultSubobject<UCharmSpawnerComponent>(TEXT("CharmSpawnerComponent"));
}

