#include "MobileTormentTrailRenderer.h"

class ABaseTormentTrailPoint;

void AMobileTormentTrailRenderer::Multicast_RemoveInstance_Implementation(ABaseTormentTrailPoint* trailPoint) {
}

void AMobileTormentTrailRenderer::Multicast_AddInstance_Implementation(ABaseTormentTrailPoint* trailPoint, bool isAttackTrailPoint) {
}

AMobileTormentTrailRenderer::AMobileTormentTrailRenderer() {
    this->_pillarIsmComponent = NULL;
    this->_wireIsmComponent = NULL;
    this->_trailIsmComponent = NULL;
    this->_pillarOutlineIsmComponent = NULL;
    this->_wireOutlineIsmComponent = NULL;
    this->_trailMaterialInstanceDynamic = NULL;
}

