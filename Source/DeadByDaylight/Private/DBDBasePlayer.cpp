#include "DBDBasePlayer.h"

class UAkComponent;
class UCustomizedAudioComponent;

bool ADBDBasePlayer::TeleportWithClothHandling(const FVector& location, const FRotator& rotation, bool checkCollisions) {
    return false;
}

void ADBDBasePlayer::Multicast_SwapCosmetics_Implementation(FName cosmeticId) {
}

bool ADBDBasePlayer::GetShowBlindDebugInfo() const {
    return false;
}

FGameplayTagContainer ADBDBasePlayer::GetSemanticTag() const {
    return FGameplayTagContainer{};
}

TEnumAsByte<EPhysicalSurface> ADBDBasePlayer::GetRightFootSurfaceType() const {
    return SurfaceType_Default;
}

FString ADBDBasePlayer::GetRightFootAudioSurfaceName() const {
    return TEXT("");
}

TEnumAsByte<EPhysicalSurface> ADBDBasePlayer::GetLeftFootSurfaceType() const {
    return SurfaceType_Default;
}

FString ADBDBasePlayer::GetLeftFootAudioSurfaceName() const {
    return TEXT("");
}

UCustomizedAudioComponent* ADBDBasePlayer::GetCustomizedAudio() const {
    return NULL;
}

FName ADBDBasePlayer::GetCharacterName() const {
    return NAME_None;
}

int32 ADBDBasePlayer::GetCharacterIndex() const {
    return 0;
}

UAkComponent* ADBDBasePlayer::GetAudioComponent() const {
    return NULL;
}

void ADBDBasePlayer::DBD_SwapCosmetics(FName cosmeticId) {
}

ADBDBasePlayer::ADBDBasePlayer() {
    this->_leftFootGroundDetector = NULL;
    this->_rightFootGroundDetector = NULL;
    this->_characterIndex = 0;
}

