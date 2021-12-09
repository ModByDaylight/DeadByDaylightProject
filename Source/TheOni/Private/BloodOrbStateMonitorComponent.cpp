#include "BloodOrbStateMonitorComponent.h"

class ABloodOrb;

void UBloodOrbStateMonitorComponent::OnBloodOrbStateChanged(const EBloodOrbState oldState, const EBloodOrbState newState, const ABloodOrb* bloodOrb) const {
}

void UBloodOrbStateMonitorComponent::OnBloodOrbSpawned(const ABloodOrb* bloodOrb) {
}

void UBloodOrbStateMonitorComponent::OnBloodOrbDestroyed(const ABloodOrb* bloodOrb) {
}

UBloodOrbStateMonitorComponent::UBloodOrbStateMonitorComponent() {
}

