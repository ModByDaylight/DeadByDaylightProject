#include "CharmAttacher.h"

class USkeletalMeshComponent;
class ACharm;
class AActor;

USkeletalMeshComponent* ACharmAttacher::GetSkeletalMeshComponentAttachedOn() {
    return NULL;
}

ACharm* ACharmAttacher::GetAttachedCharm() {
    return NULL;
}

FCharmAttacherAnimationTweak ACharmAttacher::GetAnimationTweak() {
    return FCharmAttacherAnimationTweak{};
}

AActor* ACharmAttacher::GetActorAttachedOn() {
    return NULL;
}

void ACharmAttacher::DispatchOnCharmAnimationTagsChanged() {
}

void ACharmAttacher::BindOnCharmAnimationTagsChanged() {
}

ACharmAttacher::ACharmAttacher() {
    this->_attachedCharm = NULL;
}

