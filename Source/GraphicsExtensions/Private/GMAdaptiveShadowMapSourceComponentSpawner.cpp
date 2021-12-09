#include "GMAdaptiveShadowMapSourceComponentSpawner.h"

AGMAdaptiveShadowMapSourceComponentSpawner::AGMAdaptiveShadowMapSourceComponentSpawner() {
    this->bCreateASMSourceComponentOnBeginPlay = true;
    this->bRemoveCastForCinematicOnlyFlagOnLights = true;
    this->bRemoveLightFunctionMaterialOnLights = true;
    this->NumLevelPerSource = 3;
    this->NumPreGeneratedLevelPerSource = 1;
    this->bPreviewOnly = true;
}

