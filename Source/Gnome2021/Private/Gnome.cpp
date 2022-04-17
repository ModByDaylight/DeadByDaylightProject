#include "Gnome.h"
#include "GnomeInteraction.h"
#include "ChargeableComponent.h"
#include "Interactor.h"
#include "Components/BoxComponent.h"
#include "DBDOutlineComponent.h"
#include "Components/SkeletalMeshComponent.h"




AGnome::AGnome() {
    this->_gnomeInteraction = CreateDefaultSubobject<UGnomeInteraction>(TEXT("GnomeInteraction"));
    this->_gnomeInteractionKiller = CreateDefaultSubobject<UGnomeInteraction>(TEXT("GnomeInteractionKiller"));
    this->_gnomeInteractionChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("GnomeInteractionChargeable"));
    this->_gnomeInteractionChargeableKiller = CreateDefaultSubobject<UChargeableComponent>(TEXT("GnomeInteractionChargeableKiller"));
    this->_gnomeInteractor = CreateDefaultSubobject<UInteractor>(TEXT("GnomeInteractor"));
    this->_gnomeInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("GnomeInteractionZone"));
    this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("OutlineComponent"));
    this->_gnomeSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GnomeSkeletalMesh"));
}

