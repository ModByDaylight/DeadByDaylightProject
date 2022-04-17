#include "MeatHook.h"
#include "PollableEventListener.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"

class ADBDPlayer;
class UMapActorComponent;
class AEntity;
class UMontagePlayer;
class ACamperPlayer;
class ACharacter;
class UPrimitiveComponent;
class UChargeableInteractionDefinition;
class USceneComponent;
class UInteractor;
class UHookableComponent;
class UCharacterPusherComponent;

void AMeatHook::UpdateSlasherBlockerCollision() {
}


void AMeatHook::SetMeatHookInitilized(bool value) {
}

void AMeatHook::SetMapActor(UMapActorComponent* value) {
}

void AMeatHook::SetIsBeingSabotaged(bool isBeingSabotaged) {
}

void AMeatHook::SetInteractingPlayer(ADBDPlayer* interactingPlayer) {
}

void AMeatHook::SetEntity(AEntity* entity) {
}






void AMeatHook::OnStopPushingPlayer(ACharacter* character) {
}

void AMeatHook::OnStartPushingPlayer(ACharacter* character) {
}








void AMeatHook::OnHookedSurvivorAttacked() {
}





void AMeatHook::Multicast_SetIsSacrificed_Implementation(bool isSacrificed) {
}

void AMeatHook::Multicast_SetIsSabotaged_Implementation(bool setIsSabotaged, ADBDPlayer* hookBreaker, bool useCamperHookRespawnDurationModifiers, float overrideBaseHookRespawnDuration) {
}

void AMeatHook::Multicast_SetIsBrokenFromUnhook_Implementation(bool setIsBrokendFromUnhook, ADBDPlayer* hookBreaker, float overrideBaseHookRespawnDuration) {
}

void AMeatHook::Multicast_SetHookedSurvivor_Implementation(ACamperPlayer* survivor) {
}

void AMeatHook::Multicast_RefreshCharmCustomization_Implementation() {
}

void AMeatHook::Multicast_EscapeAttemptResult_Implementation(ADBDPlayer* player, bool result) {
}

void AMeatHook::Local_MoveSurvivorToHook(ACamperPlayer* survivor, const float duration) {
}

void AMeatHook::InitializeMeatHookIfPossible() {
}


FAnimationMontageDescriptor AMeatHook::GetUnhookOutMontageDescriptor() const {
    return FAnimationMontageDescriptor{};
}

FAnimationMontageDescriptor AMeatHook::GetUnhookInMontageDescriptor() const {
    return FAnimationMontageDescriptor{};
}

UChargeableInteractionDefinition* AMeatHook::GetUnhookCID_Implementation() const {
    return NULL;
}

float AMeatHook::GetStruggleThreshold() const {
    return 0.0f;
}

float AMeatHook::GetStrugglePercent() const {
    return 0.0f;
}

ADBDPlayer* AMeatHook::GetSaboteurPlayer() const {
    return NULL;
}

float AMeatHook::GetSabotageHookRespawnDuration() const {
    return 0.0f;
}

UMontagePlayer* AMeatHook::GetMontagePlayer() const {
    return NULL;
}

USceneComponent* AMeatHook::GetMeatHookEffect_Implementation() const {
    return NULL;
}


UInteractor* AMeatHook::GetMainInteractor_Implementation() const {
    return NULL;
}


bool AMeatHook::GetIsSacrificed() const {
    return false;
}

bool AMeatHook::GetIsSabotaged() const {
    return false;
}

bool AMeatHook::GetIsInBasement() const {
    return false;
}

bool AMeatHook::GetIsBroken() const {
    return false;
}


UPrimitiveComponent* AMeatHook::GetInteractorPrimitiveComponent_Implementation() const {
    return NULL;
}

ADBDPlayer* AMeatHook::GetInteractingPlayer() const {
    return NULL;
}

ACamperPlayer* AMeatHook::GetHookedSurvivor() const {
    return NULL;
}

UHookableComponent* AMeatHook::GetHookableComponentOfHookedActor() const {
    return NULL;
}

UCharacterPusherComponent* AMeatHook::GetCharacterPusher() const {
    return NULL;
}


USceneComponent* AMeatHook::GetCamperHookedSnapTransform_Implementation() const {
    return NULL;
}


void AMeatHook::DebugHookedSurvivor(ACamperPlayer* expectedSurvivor) const {
}


bool AMeatHook::CanUnhookSurvivor(const ACamperPlayer* survivor) const {
    return false;
}

bool AMeatHook::CanSurvivorStruggle(ACamperPlayer* survivor) const {
    return false;
}

bool AMeatHook::CanSurvivorAttemptEscape(ACamperPlayer* survivor) const {
    return false;
}

bool AMeatHook::CanHookSurvivor() const {
    return false;
}

bool AMeatHook::CanBeSabotaged() const {
    return false;
}

void AMeatHook::Authority_SignalUnhookingEnter() {
}

void AMeatHook::Authority_SignalUnhookingCharged() {
}

void AMeatHook::Authority_SignalUnhookingAborted() {
}

void AMeatHook::Authority_SignalSurvivorAttemptingEscapeAborted() {
}

void AMeatHook::Authority_SignalSurvivorAttemptingEscape() {
}

void AMeatHook::Authority_SetIsSacrificed(bool isSacrificed) {
}

void AMeatHook::Authority_SetIsSabotaged(bool isSabotaged, ADBDPlayer* saboteur, bool useCamperHookRespawnDurationModifiers, float overrideBaseHookRespawnDuration) {
}

void AMeatHook::Authority_SetIsBrokenFromUnhook(bool isBrokenFromUnhook, ADBDPlayer* hookBreaker, float overrideBaseHookRespawnDuration) {
}

void AMeatHook::Authority_SetHookedSurvivor(ACamperPlayer* survivor) {
}

void AMeatHook::Authority_SendOnUnhookAnalytics(ADBDPlayer* rescuer) {
}

AMeatHook::AMeatHook() {
    this->IsSurvivorStruggling = false;
    this->WasSurvivorStruggleCancelled = false;
    this->IsSacrificeEnabled = true;
    this->IsInBasement = false;
    this->IsBreakable = false;
    this->IsSabotageable = false;
    this->SnapHookedCharacter = true;
    this->FullyHooked = false;
    this->HookYaw = 0.00f;
    this->TargetHookYaw = 0.00f;
    this->_struggleThreshold = 0.50f;
    this->_characterPusher = NULL;
    this->_slasherCollisionBlocker = NULL;
    this->_eventListener = CreateDefaultSubobject<UPollableEventListener>(TEXT("EventListener"));
    this->_hookedSurvivor = NULL;
    this->_hookBreakerPlayer = NULL;
    this->_mainInteractor = NULL;
    this->_meatHookEffect = NULL;
    this->_unhook = NULL;
    this->_camperHookedSnapTransform = NULL;
    this->_entity = NULL;
    this->_preventDrainProgression = false;
    this->_perceptionStimuliComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
    this->_interactingPlayer = NULL;
    this->_initialized = false;
    this->_cachedMapActor = NULL;
}

