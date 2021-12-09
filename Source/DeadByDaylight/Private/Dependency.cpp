#include "Dependency.h"

FDependency::FDependency() {
    this->Type = ETileSpawnPointType::Unspecified;
    this->Object = NULL;
    this->Unique = false;
    this->Count = 0;
}

