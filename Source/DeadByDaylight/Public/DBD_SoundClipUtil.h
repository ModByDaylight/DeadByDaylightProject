#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MapMeshToAkAudioEvent.h"
#include "Engine/EngineTypes.h"
#include "MapSoundsToAvoid.h"
#include "DBD_SoundClipUtil.generated.h"

class UAkAudioEvent;
class UPrimitiveComponent;
class UStaticMeshComponent;
class AActor;

UCLASS(Abstract, Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBD_SoundClipUtil : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FMapMeshToAkAudioEvent> AudioMap;
    
protected:
    UPROPERTY(Transient)
    TMap<FName, FMapMeshToAkAudioEvent> _audioEventMap;
    
    UPROPERTY(Transient)
    TArray<FMapSoundsToAvoid> _objectsWhoHavePlayedASound;
    
    UPROPERTY(Transient)
    TMap<UAkAudioEvent*, float> _nextSoundPlayTime;
    
public:
    UDBD_SoundClipUtil();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGotMeshToTriggerSound(UStaticMeshComponent* usm);
    
    UFUNCTION()
    void OnCharacterEnterSoundRegion(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    UAkAudioEvent* GetAudioEventForMesh(UStaticMeshComponent* usm);
    
};

