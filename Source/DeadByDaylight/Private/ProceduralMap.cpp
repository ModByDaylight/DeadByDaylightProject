#include "ProceduralMap.h"

FProceduralMap::FProceduralMap() {
    this->HookMinDistance = 0.00f;
    this->HookMinCount = 0;
    this->HookMaxCount = 0;
    this->BookShelvesMinDistance = 0.00f;
    this->BookShelvesMinCount = 0;
    this->BookShelvesMaxCount = 0;
    this->LivingWorldObjectsMinCount = 0;
    this->LivingWorldObjectsMaxCount = 0;
    this->SortingIndex = 0;
    this->IsInNonViolentBuild = false;
}

