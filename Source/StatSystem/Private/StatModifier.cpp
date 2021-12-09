#include "StatModifier.h"

FStatModifier::FStatModifier() {
    this->OperationStrategy = EModifierOperationStrategy::Add;
    this->CompoundStrategy = EModifierCompoundStrategy::Add;
}

