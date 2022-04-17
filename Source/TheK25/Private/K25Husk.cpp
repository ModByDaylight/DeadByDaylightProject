#include "K25Husk.h"
#include "AnimationMontageSlave.h"
#include "CustomizedSkeletalMesh.h"
#include "MontagePlayer.h"




AK25Husk::AK25Husk() {
    this->_customizedSkeletalMeshComponent = CreateDefaultSubobject<UCustomizedSkeletalMesh>(TEXT("Customized Skeletal Mesh Component"));
    this->_montageFollower = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("MontageSlave"));
    this->_montagePlayer = CreateDefaultSubobject<UMontagePlayer>(TEXT("AnimMontagePlayer"));
    this->_k25CharacterOverrideID = 268435480;
}

