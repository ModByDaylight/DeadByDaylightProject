#include "ReverseBearTrap.h"
#include "Net/UnrealNetwork.h"
#include "AnimationMontageSlave.h"

class ACamperPlayer;

void AReverseBearTrap::StopMontage_Implementation() {
}

void AReverseBearTrap::StopExecutionTimer() {
}

bool AReverseBearTrap::ShouldUpdateExecutionTimer_Implementation() const {
    return false;
}

void AReverseBearTrap::SetVisible(bool visible) {
}

void AReverseBearTrap::SetGateClosedAtAttachment(bool closed) {
}

void AReverseBearTrap::ResetExecutionTimer(float time) {
}


void AReverseBearTrap::OnGeneratorComplete(int32 remainingGeneratorCount) {
}

void AReverseBearTrap::OnExitWarningZone() {
}

void AReverseBearTrap::OnEnterWarningZone() {
}




void AReverseBearTrap::NotifyOnAttachSurvivorBegin(ACamperPlayer* survivor) {
}

void AReverseBearTrap::NotifyDetachStarted(ACamperPlayer* survivor) {
}

bool AReverseBearTrap::IsRBTActivated() const {
    return false;
}

bool AReverseBearTrap::IsInWarningZone() const {
    return false;
}

bool AReverseBearTrap::IsExecutionTimerDone() const {
    return false;
}

bool AReverseBearTrap::IsExecutionTimerActive() const {
    return false;
}

bool AReverseBearTrap::HasDetachStarted() const {
    return false;
}

bool AReverseBearTrap::GetWasGateClosedAtAttachment() const {
    return false;
}

int32 AReverseBearTrap::GetWarningLevel_Implementation() const {
    return 0;
}

int32 AReverseBearTrap::GetKeyID() const {
    return 0;
}

bool AReverseBearTrap::GetGeneratorFixedAfterAttachment() const {
    return false;
}

bool AReverseBearTrap::GetExitGatesPoweredAfterAttachment() const {
    return false;
}

float AReverseBearTrap::GetExecutionTimerTimeLeft() const {
    return 0.0f;
}

float AReverseBearTrap::GetExecutionTimerPercentTimeElapsed() const {
    return 0.0f;
}

ACamperPlayer* AReverseBearTrap::GetAttachedSurvivor() const {
    return NULL;
}

void AReverseBearTrap::FastForwardExecutionTimer(float deltaTime) {
}

void AReverseBearTrap::DetachSurvivor(ACamperPlayer* survivor) {
}

bool AReverseBearTrap::CanExecute() const {
    return false;
}

void AReverseBearTrap::Authority_SetKeyID(int32 keyID) {
}

void AReverseBearTrap::AttachSurvivor(ACamperPlayer* survivor) {
}

void AReverseBearTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AReverseBearTrap, _keyID);
    DOREPLIFETIME(AReverseBearTrap, _exitGatesPoweredAfterAttachment);
    DOREPLIFETIME(AReverseBearTrap, _generatorFixedAfterAttachment);
}

AReverseBearTrap::AReverseBearTrap() {
    this->_rbtMesh = NULL;
    this->_animMontageSlave = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("Anim Montage Slave"));
    this->_keyID = 0;
    this->_exitGatesPoweredAfterAttachment = false;
    this->_generatorFixedAfterAttachment = false;
}

