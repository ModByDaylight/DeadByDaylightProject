#include "CharacterEvasionBehaviourData.h"

class AActor;

void UCharacterEvasionBehaviourData::Init(AActor* hunter, TArray<AActor*> escapePoints, float minEscapeDist) {
}

UCharacterEvasionBehaviourData::UCharacterEvasionBehaviourData() {
    this->_hunter = NULL;
    this->_minEscapeDist = 0.00f;
}

