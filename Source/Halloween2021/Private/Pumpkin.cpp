#include "Pumpkin.h"
#include "Net/UnrealNetwork.h"
#include "ChargeableComponent.h"
#include "DBDOutlineComponent.h"
#include "PumpkinInteraction.h"
#include "Interactor.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"






void APumpkin::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APumpkin, _pumpkinType);
}

APumpkin::APumpkin() {
    this->_pumpkinType = EPumpkinType::None;
    this->_pumpkinInteraction = CreateDefaultSubobject<UPumpkinInteraction>(TEXT("PumpkinInteraction"));
    this->_pumpkinInteractionKiller = CreateDefaultSubobject<UPumpkinInteraction>(TEXT("PumpkinInteractionKiller"));
    this->_pumpkinInteractionChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("PumpkinInteractionChargeable"));
    this->_pumpkinInteractionChargeableKiller = CreateDefaultSubobject<UChargeableComponent>(TEXT("PumpkinInteractionChargeableKiller"));
    this->_pumpkinInteractor = CreateDefaultSubobject<UInteractor>(TEXT("PumpkinInteractor"));
    this->_pumpkinInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("PumpkinInteractionZone"));
    this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("OutlineComponent"));
    this->_pumpkinSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PumpkinSkeletalMesh"));
    this->_pumpkinStatusEffect = NULL;
}

