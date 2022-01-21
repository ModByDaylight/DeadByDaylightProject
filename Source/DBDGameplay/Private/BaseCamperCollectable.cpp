#include "BaseCamperCollectable.h"
#include "SpherePlayerOverlapComponent.h"
#include "Interactor.h"
#include "DropItemInteraction.h"
#include "MaterialHelper.h"
#include "DBDOutlineComponent.h"
#include "CollectItemInteraction.h"
#include "Components/SphereComponent.h"
#include "SurvivorCollectableOutlineUpdateStrategy.h"

ABaseCamperCollectable::ABaseCamperCollectable() {
    this->_interactable = CreateDefaultSubobject<USpherePlayerOverlapComponent>(TEXT("InteractableZone"));
    this->_collectableInteractor = CreateDefaultSubobject<UInteractor>(TEXT("CollectableInteractorComponent"));
    this->_dropInteraction = CreateDefaultSubobject<UDropItemInteraction>(TEXT("DropItemInteraction"));
    this->_collectInteraction = CreateDefaultSubobject<UCollectItemInteraction>(TEXT("CollectItemInteraction"));
    this->_infectablePrimitive = CreateDefaultSubobject<USphereComponent>(TEXT("InfectableSphere"));
    this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("DBDOutlineComponent"));
    this->_materialHelper = CreateDefaultSubobject<UMaterialHelper>(TEXT("MaterialHelperComponent"));
    this->_survivorCollectableOutlineUpdateStrategy = CreateDefaultSubobject<USurvivorCollectableOutlineUpdateStrategy>(TEXT("SurvivorCollectableOutlineUpdateStrategy"));
}

