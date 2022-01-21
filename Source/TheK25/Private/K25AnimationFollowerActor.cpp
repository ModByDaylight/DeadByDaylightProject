#include "K25AnimationFollowerActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "AnimationMontageSlave.h"
#include "MontagePlayer.h"

void AK25AnimationFollowerActor::OnMontageStopped(const FAnimationMontageDescriptor id) {
}

void AK25AnimationFollowerActor::OnMontageStarted(const FAnimationMontageDescriptor id, const float rate) {
}

void AK25AnimationFollowerActor::OnMontageEnd(const FAnimationMontageDescriptor montage, bool interrupted) {
}

AK25AnimationFollowerActor::AK25AnimationFollowerActor() {
    this->_skeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Mesh"));
    this->_montageFollower = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("MontageSlave"));
    this->_montagePlayer = CreateDefaultSubobject<UMontagePlayer>(TEXT("AnimMontagePlayer"));
}

