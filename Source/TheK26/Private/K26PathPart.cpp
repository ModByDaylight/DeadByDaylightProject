#include "K26PathPart.h"
#include "Components/StaticMeshComponent.h"
#include "DBDOutlineComponent.h"
#include "NiagaraComponent.h"
#include "K26PowerOutlineUpdateStrategy.h"
#include "Components/SceneComponent.h"

AK26PathPart::AK26PathPart() {
    this->_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("OutlineComponent"));
    this->_visualEffectKiller = CreateDefaultSubobject<UNiagaraComponent>(TEXT("VisualEffectKiller"));
    this->_visualEffectSurvivor = CreateDefaultSubobject<UNiagaraComponent>(TEXT("VisualEffectSurvivor"));
    this->_outlineUpdateStrategy = CreateDefaultSubobject<UK26PowerOutlineUpdateStrategy>(TEXT("OutlineUpdateStrategy"));
    this->_rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("rootComponent"));
    this->_isVisibleForSurvivor = false;
    this->_isVisibleForKiller = false;
}

