#include "DBD_SoundClipUtil.h"

class UStaticMeshComponent;
class UPrimitiveComponent;
class AActor;
class UAkAudioEvent;


void UDBD_SoundClipUtil::OnCharacterEnterSoundRegion(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UAkAudioEvent* UDBD_SoundClipUtil::GetAudioEventForMesh(UStaticMeshComponent* usm) {
    return NULL;
}

UDBD_SoundClipUtil::UDBD_SoundClipUtil() {
}

