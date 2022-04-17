#include "Totem.h"
#include "Net/UnrealNetwork.h"
#include "GameplayTagContainerComponent.h"
#include "LocalPlayerTrackerComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "ActivatorComponent.h"
#include "BlockableComponent.h"
#include "TotemOutlineUpdateStrategy.h"

class ADBDPlayer;



void ATotem::OnTotemBlockChanged() {
}

void ATotem::OnRep_TotemState(const ETotemState oldTotemState) {
}

void ATotem::OnLocallyObservedChanged() {
}



bool ATotem::IsTotemBlockedForPlayer(const ADBDPlayer* player) const {
    return false;
}

bool ATotem::IsBoundToPerk() const {
    return false;
}

ETotemState ATotem::GetTotemState() const {
    return ETotemState::Cleansed;
}



float ATotem::GetBoonTotemBlessingRange() const {
    return 0.0f;
}

float ATotem::GetBoonTotemAuraRevealRange() const {
    return 0.0f;
}

FLinearColor ATotem::GetBoonAuraRevealColor() const {
    return FLinearColor{};
}


void ATotem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATotem, _boundPerks);
    DOREPLIFETIME(ATotem, _totemState);
}

ATotem::ATotem() {
    this->_totemState = ETotemState::Dull;
    this->_perceptionStimuliComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
    this->_totemBlockableComponent = CreateDefaultSubobject<UBlockableComponent>(TEXT("TotemBlockableComponent"));
    this->_localPlayerTracker = CreateDefaultSubobject<ULocalPlayerTrackerComponent>(TEXT("LocalPlayerTracker"));
    this->_activatorComponent = CreateDefaultSubobject<UActivatorComponent>(TEXT("Activator Component"));
    this->_objectState = CreateDefaultSubobject<UGameplayTagContainerComponent>(TEXT("Object State"));
    this->_interactionsAttachPoint = NULL;
    this->_totemOutlineUpdateStrategy = CreateDefaultSubobject<UTotemOutlineUpdateStrategy>(TEXT("Totem Outline Strategy"));
    this->_canBeBoundToBoonPerk = true;
}

