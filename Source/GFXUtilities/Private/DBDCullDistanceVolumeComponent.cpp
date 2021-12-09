#include "DBDCullDistanceVolumeComponent.h"

UDBDCullDistanceVolumeComponent::UDBDCullDistanceVolumeComponent() {
    this->Enabled = true;
    this->Unbound = false;
    this->_previewInfluenceBox = NULL;
}

