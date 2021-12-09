#include "FootSteps.h"

class AActor;

void AFootSteps::OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction) {
}

AFootSteps::AFootSteps() {
    this->_raycastHalfAngle = 165.00f;
    this->_raycastZOffset = 120.00f;
    this->_raycastDistance = 360.00f;
    this->_material = NULL;
    this->_minimumDecalSize = 200.00f;
    this->_maximumDecalSize = 240.00f;
    this->_projectionTickness = 20.00f;
    this->_visibilityMultiplierInterpSpeed = 1.00f;
    this->_fadeCurve = NULL;
    this->_veinsCurve = NULL;
    this->_decalSpawner = NULL;
}

