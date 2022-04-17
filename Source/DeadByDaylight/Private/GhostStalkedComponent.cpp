#include "GhostStalkedComponent.h"
#include "Net/UnrealNetwork.h"
#include "TimerObject.h"

class AActor;
class ACharacter;
class UCharacterSightComponent;
class ASlasherPlayer;

void UGhostStalkedComponent::OnKillerStealthChanged(bool isStealth) {
}

void UGhostStalkedComponent::OnCharacterSightChanged(ACharacter* character, UCharacterSightComponent* sightComponent) {
}


bool UGhostStalkedComponent::IsMarked() const {
    return false;
}

void UGhostStalkedComponent::Initialize_Implementation(ASlasherPlayer* killer) {
}

void UGhostStalkedComponent::Client_OnSpotKiller_Implementation() {
}

void UGhostStalkedComponent::Authority_OnStalkedChargeFull(bool completed, const TArray<AActor*>& instigatorsForCompletion) {
}

void UGhostStalkedComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGhostStalkedComponent, _isMarked);
    DOREPLIFETIME(UGhostStalkedComponent, _ghostKillerInstinctEffect);
}

UGhostStalkedComponent::UGhostStalkedComponent() {
    this->_ghostKillerInstinctEffect = NULL;
    this->_markTimer = CreateDefaultSubobject<UTimerObject>(TEXT("MarkTimer"));
    this->_killer = NULL;
    this->_stalkedComponent = NULL;
}

