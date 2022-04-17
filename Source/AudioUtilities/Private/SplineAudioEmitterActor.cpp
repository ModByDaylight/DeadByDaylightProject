#include "SplineAudioEmitterActor.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "AkComponent.h"

ASplineAudioEmitterActor::ASplineAudioEmitterActor() {
    this->_root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->_theSpline = CreateDefaultSubobject<USplineComponent>(TEXT("the Spline"));
    this->_emitter = CreateDefaultSubobject<UAkComponent>(TEXT("Emitter"));
}

