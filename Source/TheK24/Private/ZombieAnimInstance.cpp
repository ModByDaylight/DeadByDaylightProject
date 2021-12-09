#include "ZombieAnimInstance.h"

UZombieAnimInstance::UZombieAnimInstance() {
    this->_speed = 0.00f;
    this->_zombieState = EZombieState::InPool;
    this->_zombieCharacter = NULL;
    this->_isFalling = false;
    this->_zombieGender = EZombieGender::Male;
}

