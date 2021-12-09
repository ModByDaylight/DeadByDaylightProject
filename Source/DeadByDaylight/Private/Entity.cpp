#include "Entity.h"

AEntity::AEntity() {
    this->_dissolveCurve = NULL;
    this->_revealsCurve = NULL;
    this->_materialHelper = NULL;
    this->_skeletalMesh = NULL;
}

