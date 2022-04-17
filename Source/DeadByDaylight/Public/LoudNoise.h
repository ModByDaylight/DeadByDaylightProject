#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LoudNoise.generated.h"

class UDecalComponent;
class UParticleSystemComponent;
class UAkComponent;
class USceneComponent;

UCLASS()
class DEADBYDAYLIGHT_API ALoudNoise : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UDecalComponent* _toInfinityDecal;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UParticleSystemComponent* _distortionParticleSystem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UAkComponent* _ak_audio_loudNoise;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    USceneComponent* _rootScene;
    
    UPROPERTY(BlueprintReadOnly)
    float _loudNoiseMinDistance;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float _loudNoiseLifetime;
    
    UPROPERTY(EditDefaultsOnly)
    float _heightToAddToLoudNoiseLocation;
    
    UPROPERTY(EditDefaultsOnly)
    float _loudNoiseDecalDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float _cameraDecalDistance;
    
public:
    ALoudNoise();
};

