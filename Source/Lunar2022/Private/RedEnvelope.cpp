#include "RedEnvelope.h"
#include "Net/UnrealNetwork.h"
#include "DBDOutlineComponent.h"
#include "Interactor.h"
#include "RedEnvelopeInteraction.h"
#include "ChargeableComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

class ADBDPlayer;

void ARedEnvelope::OnRep_OwnerPlayerState() {
}

void ARedEnvelope::OnLocallyObservedChanged() {
}

void ARedEnvelope::Multicast_HandleOnInteractionComplete_Implementation(const ADBDPlayer* interactingPlayer, bool ownerWasInteractingPlayer, bool isJackpot) {
}







void ARedEnvelope::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARedEnvelope, _ownerPlayerState);
}

ARedEnvelope::ARedEnvelope() {
    this->_ownerPlayerState = NULL;
    this->_redEnvelopeInteraction = CreateDefaultSubobject<URedEnvelopeInteraction>(TEXT("RedEnvelopeInteraction"));
    this->_redEnvelopeInteractionKiller = CreateDefaultSubobject<URedEnvelopeInteraction>(TEXT("RedEnvelopeInteractionKiller"));
    this->_redEnvelopeInteractionChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("RedEnvelopeInteractionChargeable"));
    this->_redEnvelopeInteractionChargeableKiller = CreateDefaultSubobject<UChargeableComponent>(TEXT("RedEnvelopeInteractionChargeableKiller"));
    this->_redEnvelopeInteractor = CreateDefaultSubobject<UInteractor>(TEXT("RedEnvelopeInteractor"));
    this->_redEnvelopeInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("RedEnvelopeInteractionZone"));
    this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("OutlineComponent"));
    this->_redEnvelopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RedEnvelopeMesh"));
}

