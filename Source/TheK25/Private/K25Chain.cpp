#include "K25Chain.h"

class UInstancedStaticMeshComponent;
class USplineComponent;
class AK25SurvivorChainAttachmentAnchor;

void AK25Chain::SetSplineComponent(USplineComponent* component) {
}

void AK25Chain::SetInstancedMeshComponent(UInstancedStaticMeshComponent* instancedMesh) {
}

bool AK25Chain::IsAttachedToControlledProjectile() const {
    return false;
}

AK25SurvivorChainAttachmentAnchor* AK25Chain::GetSurvivorChainAttachmentAnchor() const {
    return NULL;
}

FVector AK25Chain::GetChainStartLocation() const {
    return FVector{};
}

FVector AK25Chain::GetChainEndLocation() const {
    return FVector{};
}










AK25Chain::AK25Chain() {
    this->_attachedToProjectileInfluenceCurve = NULL;
    this->_reelbackInfluenceCurve = NULL;
    this->_offsetMultiplierInfluenceCurve = NULL;
    this->_chainOffsetMinValue = 10.00f;
    this->_chainOffsetMaxValue = 10.00f;
    this->_reelbackChainOffsetMinValue = 10.00f;
    this->_reelbackChainOffsetMaxValue = 10.00f;
    this->_chainInstanceSpacing = 10.00f;
    this->_quickChainOffsetTimerLength = 0.50f;
    this->_reachingSurvivorAnchorTime = 0.75f;
    this->_chainOffsetTimerLength = 5.00f;
    this->_isAcquiredFromPool = false;
    this->_sphereTraceRadius = 4.00f;
    this->_projectileAttachedTo = NULL;
    this->_chainSplineComponent = NULL;
    this->_chainInstancedMesh = NULL;
    this->_currentInfluenceCurve = NULL;
    this->_chainState = EK25ChainState::InPool;
    this->_chainCreationStrategy = EK25ChainCreationStrategy::Spline;
}

