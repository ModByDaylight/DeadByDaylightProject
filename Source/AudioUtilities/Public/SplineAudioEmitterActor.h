#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplineAudioEmitterActor.generated.h"

class USceneComponent;
class USplineComponent;
class UAkComponent;

UCLASS()
class AUDIOUTILITIES_API ASplineAudioEmitterActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, Export)
    USceneComponent* _root;
    
    UPROPERTY(EditDefaultsOnly, Export)
    USplineComponent* _theSpline;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UAkComponent* _emitter;
    
public:
    ASplineAudioEmitterActor();
};

