#include "CharmAttacher.h"

class AActor;
class ACharm;
class USkeletalMeshComponent;

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
    this->_chain = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ChainSkeletalMeshComponent"));
    this->_attachedCharm = NULL;
}

