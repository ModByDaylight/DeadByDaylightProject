#include "EndGameStateComponent.h"
#include "Net/UnrealNetwork.h"

void UEndGameStateComponent::OnRep_WorldTimeAtLastDilationModification() {
}

void UEndGameStateComponent::OnRep_TimeDilation() {
}

void UEndGameStateComponent::OnRep_IsTimerPaused() {
}

void UEndGameStateComponent::OnRep_IsEndGameOver() {
}

void UEndGameStateComponent::Multicast_SetIsInEndGameSimulation_Implementation(bool endGameSimulation) {
}
bool UEndGameStateComponent::Multicast_SetIsInEndGameSimulation_Validate(bool endGameSimulation) {
    return true;
}

bool UEndGameStateComponent::IsTimerSlowedDown() const {
    return false;
}

bool UEndGameStateComponent::IsEndGameOver() const {
    return false;
}

bool UEndGameStateComponent::HasEndGameBegun() const {
    return false;
}

float UEndGameStateComponent::GetElapsedTimePercent() const {
    return 0.0f;
}

void UEndGameStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEndGameStateComponent, _isEndGameOver);
    DOREPLIFETIME(UEndGameStateComponent, _worldTimeAtLastModification);
    DOREPLIFETIME(UEndGameStateComponent, _timeDilation);
    DOREPLIFETIME(UEndGameStateComponent, _isTimerPaused);
    DOREPLIFETIME(UEndGameStateComponent, _normalTotalTimeElapsedAtLastTimeModification);
    DOREPLIFETIME(UEndGameStateComponent, _endGameScenarioTrigger);
}

UEndGameStateComponent::UEndGameStateComponent() {
    this->_isEndGameOver = false;
    this->_worldTimeAtLastModification = 0.00f;
    this->_timeDilation = 1.00f;
    this->_isTimerPaused = false;
    this->_normalTotalTimeElapsedAtLastTimeModification = 0.00f;
    this->_endGameScenarioTrigger = EEndGameScenarioTrigger::NotActivated;
}

