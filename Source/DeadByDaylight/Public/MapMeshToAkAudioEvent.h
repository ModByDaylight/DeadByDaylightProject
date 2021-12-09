#pragma once
#include "CoreMinimal.h"
#include "MapMeshToAkAudioEvent.generated.h"

class UStaticMesh;
class UAkAudioEvent;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FMapMeshToAkAudioEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* SoundEvent;
    
    UPROPERTY(EditAnywhere)
    float MinDelayBetweenEvents;
    
    UPROPERTY(EditAnywhere)
    float MinDelayBetweenObject;
    
    FMapMeshToAkAudioEvent();
};

