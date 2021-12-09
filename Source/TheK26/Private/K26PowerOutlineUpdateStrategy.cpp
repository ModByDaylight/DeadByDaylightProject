#include "K26PowerOutlineUpdateStrategy.h"

void UK26PowerOutlineUpdateStrategy::SetOutlineVisibility(bool isActive) {
}

bool UK26PowerOutlineUpdateStrategy::IsOutlineVisible() const {
    return false;
}

UK26PowerOutlineUpdateStrategy::UK26PowerOutlineUpdateStrategy() {
    this->_isOutlineEnabled = false;
    this->_isOnlyVisibleForKiller = true;
}

