#include "AttackHitResult.h"

FAttackHitResult::FAttackHitResult() {
    this->Attacker = NULL;
    this->Target = NULL;
    this->Attack = NULL;
    this->IsBasicAttack = false;
    this->CosmeticOnly = false;
}

