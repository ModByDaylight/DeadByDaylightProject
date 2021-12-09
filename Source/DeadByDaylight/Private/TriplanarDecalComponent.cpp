#include "TriplanarDecalComponent.h"


UTriplanarDecalComponent::UTriplanarDecalComponent() {
    this->MinHeight = 0.50f;
    this->Height = 0.00f;
    this->MaskIntensity = 100.00f;
    this->TopTexture = NULL;
    this->BottomTexture = NULL;
    this->MaskTexture = NULL;
    this->MinQualitySetting = DM_High;
    this->_triPlanarDecal = NULL;
    this->_triPlanarDecalClass = NULL;
    this->_decalMaterial = NULL;
}

