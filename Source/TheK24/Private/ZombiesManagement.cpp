#include "ZombiesManagement.h"
#include "AuthoritativeActorPoolComponent.h"
#include "ZombiesPatrolAreaManager.h"

void AZombiesManagement::Authority_OnIntroComplete() {
}

AZombiesManagement::AZombiesManagement() {
    this->_zombiePool = CreateDefaultSubobject<UAuthoritativeActorPoolComponent>(TEXT("ZombiePool"));
    this->_zombiesPatrolAreaManager = CreateDefaultSubobject<UZombiesPatrolAreaManager>(TEXT("ZombiesPatrolAreaManager"));
}

