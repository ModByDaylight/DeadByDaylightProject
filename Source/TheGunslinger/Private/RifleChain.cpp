#include "RifleChain.h"

class USplineComponent;
class UInstancedStaticMeshComponent;
class UCurveFloat;
class URiflePlayerLinker;
class URifleChainTensionComponent;

void ARifleChain::UpdateChainMesh(UInstancedStaticMeshComponent* mesh, USplineComponent* spline, float alpha) {
}

int32 ARifleChain::SpawnChainPoints(FVector start, FVector stop, UCurveFloat* influenceCurve, float pointYPosition, float pointZPosition, bool useOffset, USplineComponent* spline) {
    return 0;
}





bool ARifleChain::IsColliding() const {
    return false;
}

float ARifleChain::GetUnwindingSpeed() const {
    return 0.0f;
}

URiflePlayerLinker* ARifleChain::GetRiflePlayerLinker() const {
    return NULL;
}

TArray<FHitResult> ARifleChain::GetFirstAndLastCollisionHits() const {
    return TArray<FHitResult>();
}

URifleChainTensionComponent* ARifleChain::GetChainTensionComponent() const {
    return NULL;
}

FVector ARifleChain::GetChainStart() const {
    return FVector{};
}

FVector ARifleChain::GetChainEnd() const {
    return FVector{};
}

ARifleChain::ARifleChain() {
    this->_chainCenterAkComponent = NULL;
    this->_collisionLoopStartEvent = NULL;
    this->_collisionLoopEndEvent = NULL;
    this->_sphereTraceRadius = 4.00f;
    this->_timeBetweenTrace = 0.10f;
}

