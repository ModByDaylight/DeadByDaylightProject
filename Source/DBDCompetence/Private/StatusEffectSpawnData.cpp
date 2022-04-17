#include "StatusEffectSpawnData.h"

FStatusEffectSpawnData::FStatusEffectSpawnData() {
    this->CustomParam = 0.00f;
    this->ReceiverStrategy = EStatusEffectSpawnerReceiverStrategy::AllCharacter;
    this->PawnType = EPawnType::VE_None;
    this->SkipOriginatingPlayer = false;
}

