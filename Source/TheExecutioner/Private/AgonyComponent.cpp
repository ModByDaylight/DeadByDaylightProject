#include "AgonyComponent.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;




void UAgonyComponent::OnShowBarbWireFXOnGameEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void UAgonyComponent::OnRep_IsInAgony() {
}




void UAgonyComponent::OnHideBarbWireFXOnGameEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}


bool UAgonyComponent::IsInAgony() const {
    return false;
}

bool UAgonyComponent::IsAgonyMoriable() const {
    return false;
}


void UAgonyComponent::Authority_OnDrainStageChanged(const int32 drainStage, ADBDPlayer* target) {
}

void UAgonyComponent::Authority_OnAttackTrailDamageCooldownTimerDone() {
}

void UAgonyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAgonyComponent, _isInAgony);
    DOREPLIFETIME(UAgonyComponent, _isAgonyMoriable);
    DOREPLIFETIME(UAgonyComponent, _inAttackTrailDamageCooldown);
}

UAgonyComponent::UAgonyComponent() {
    this->_inAttackTrailDamageCooldown = false;
}

