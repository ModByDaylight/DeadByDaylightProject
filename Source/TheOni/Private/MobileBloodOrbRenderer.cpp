#include "MobileBloodOrbRenderer.h"

AMobileBloodOrbRenderer::AMobileBloodOrbRenderer() {
    this->OrbMaterialInstance = NULL;
    this->OutlineMaterialInstance = NULL;
    this->CullInterval = 25.00f;
    this->_ismComponent = NULL;
    this->_outlineIsmComponent = NULL;
    this->_outlineMaterialInstanceDynamic = NULL;
    this->_orbMaterialInstanceDynamic = NULL;
    this->_bloodOrbVisibilityComponent = NULL;
}

