#include "BlindingFXComponent.h"

class UMaterialInstanceDynamic;
class UPostProcessComponent;

void UBlindingFXComponent::SetPostProcessMaterial(UMaterialInstanceDynamic* value) {
}

void UBlindingFXComponent::SetPostProcess(UPostProcessComponent* value) {
}

UBlindingFXComponent::UBlindingFXComponent() {
    this->_blindnessMaterialCurve = NULL;
    this->_blindnessCurve = NULL;
    this->_postProcess = NULL;
    this->_postProcessMaterial = NULL;
}

