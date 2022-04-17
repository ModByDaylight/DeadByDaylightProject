#include "CamperDreamworldComponent.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;
class ASlasherPlayer;
class AActor;

bool UCamperDreamworldComponent::ShouldLookSleepyToLocalPlayer() const {
    return false;
}

void UCamperDreamworldComponent::SetScriptedKillerVisibility(bool useScriptedKillerVisibility) {
}

void UCamperDreamworldComponent::OnRep_ShowKiller() {
}

void UCamperDreamworldComponent::Local_SetShowKiller(bool showKiller, bool instantly) {
}

void UCamperDreamworldComponent::InitializeTunableValues(ASlasherPlayer* killer) {
}


int32 UCamperDreamworldComponent::GetWakeUpByOtherCount() const {
    return 0;
}

bool UCamperDreamworldComponent::CanWakeUpBySkillCheck() const {
    return false;
}

bool UCamperDreamworldComponent::CanWakeUp() const {
    return false;
}

void UCamperDreamworldComponent::BroadcastCamperTriggeredDreamTrap(AActor* dreamObject) {
}

void UCamperDreamworldComponent::Authority_WakeUpByWakerObject() {
}

void UCamperDreamworldComponent::Authority_WakeUpByOther(ADBDPlayer* instigator) {
}

void UCamperDreamworldComponent::Authority_WakeUpByHook() {
}

void UCamperDreamworldComponent::Authority_SpawnDreamworldStatusEffect() const {
}

void UCamperDreamworldComponent::Authority_PutAsleep() {
}

void UCamperDreamworldComponent::Authority_OnAttacked() {
}

void UCamperDreamworldComponent::Authority_HandleSkillCheckFailure(bool wakeUpEveryoneInteracting, ADBDPlayer* instigator) {
}

int32 UCamperDreamworldComponent::Authority_GetWakeUpBySkillCheckCount() const {
    return 0;
}

int32 UCamperDreamworldComponent::Authority_GetFellAsleepCount() const {
    return 0;
}

void UCamperDreamworldComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCamperDreamworldComponent, _survivorSleepiness);
    DOREPLIFETIME(UCamperDreamworldComponent, _sleepinessProtectionRemainingDuration);
    DOREPLIFETIME(UCamperDreamworldComponent, _wakeUpByOtherCount);
    DOREPLIFETIME(UCamperDreamworldComponent, _showKiller);
    DOREPLIFETIME(UCamperDreamworldComponent, _forcedAsleep);
    DOREPLIFETIME(UCamperDreamworldComponent, _showKillerInstantly);
}

UCamperDreamworldComponent::UCamperDreamworldComponent() {
    this->_sleepinessProtectionRemainingDuration = 0.00f;
    this->_sleepGainPerSecond = 0.00f;
    this->_wakeUpByOtherCount = 0;
    this->_showKiller = false;
    this->_glimpseMinDistance = 0.00f;
    this->_glimpseMaxDistance = 0.00f;
    this->_killerGlimpseCooldown = 0.00f;
    this->_killerGlimpseDuration = 0.00f;
    this->_wakeUpBySkillCheckCount = 0;
    this->_fellAsleepCount = 0;
    this->_forcedAsleep = false;
    this->_linkedWaker = NULL;
    this->_useScriptedKillerVisibility = false;
    this->_showKillerInstantly = false;
}

