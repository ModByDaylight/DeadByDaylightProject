#include "BoneSocketLocalVelocityEvaluator.h"

FVector UBoneSocketLocalVelocityEvaluator::GetLocalVelocity(const FName boneSocketName) const {
    return FVector{};
}

UBoneSocketLocalVelocityEvaluator::UBoneSocketLocalVelocityEvaluator() {
    this->_meshComponent = NULL;
}

