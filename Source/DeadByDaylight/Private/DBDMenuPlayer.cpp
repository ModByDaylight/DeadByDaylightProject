#include "DBDMenuPlayer.h"
#include "Components/SkeletalMeshComponent.h"
#include "MaterialHelper.h"

class AActor;
class UCharmSpawnerComponent;

void ADBDMenuPlayer::WrappedOnDestroyed(AActor* DestroyedActor) {
}

bool ADBDMenuPlayer::ShouldShowSpawnAnimation() const {
    return false;
}

bool ADBDMenuPlayer::ShouldApplyPositionOffset() const {
    return false;
}




EItemHandPosition ADBDMenuPlayer::GetHandPosition() const {
    return EItemHandPosition::None;
}

UCharmSpawnerComponent* ADBDMenuPlayer::GetCharmSpawnerComponent_Implementation() {
    return NULL;
}

void ADBDMenuPlayer::BeginDestroySequence_Internal_Implementation() {
}


ADBDMenuPlayer::ADBDMenuPlayer() {
    this->RoleSelected = false;
    this->IsOnline = false;
    this->_handPosition = EItemHandPosition::None;
    this->ItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemMesh"));
    this->MaterialHelper = CreateDefaultSubobject<UMaterialHelper>(TEXT("MaterialHelper"));
}

