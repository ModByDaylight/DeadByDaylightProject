#include "InfectedInteractableComponent.h"

class AInteractable;
class ADBDPlayer;
class ACamperPlayer;

void UInfectedInteractableComponent::SetInteractableMeshAlpha(float alpha) {
}


void UInfectedInteractableComponent::Multicast_FadeOutVomit_Implementation() {
}

void UInfectedInteractableComponent::Multicast_FadeInVomit_Implementation() {
}

void UInfectedInteractableComponent::Multicast_DestroyComponent_Implementation() {
}

void UInfectedInteractableComponent::Multicast_DebugDisplayLifetime_Implementation(float remainingLifetime) {
}

AInteractable* UInfectedInteractableComponent::GetOwningInteractable() const {
    return NULL;
}

void UInfectedInteractableComponent::Authority_OnOwningInteractableBeginOrEndUse(bool inUse, ADBDPlayer* interactingPlayer) {
}

void UInfectedInteractableComponent::Authority_OnHitWithVomit() {
}

bool UInfectedInteractableComponent::Authority_IsAMaxSicknessSurvivorInteracting() const {
    return false;
}

ACamperPlayer* UInfectedInteractableComponent::Authority_GetEquippingPlayer() const {
    return NULL;
}

UInfectedInteractableComponent::UInfectedInteractableComponent() {
    this->VomitAlphaCurve = NULL;
    this->_vomitAlphaTimeline = NULL;
}

