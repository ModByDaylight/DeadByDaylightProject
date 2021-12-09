#include "DBDAIStateComponent.h"

class AActor;

void UDBDAIStateComponent::OnUniqueGameplayEvent(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target) {
}

void UDBDAIStateComponent::OnStartAimingEventDispatched(const FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void UDBDAIStateComponent::OnSpecialAttackEventDispatched(const FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

UDBDAIStateComponent::UDBDAIStateComponent() {
    this->UnsafeStateAtHookedCount = 1;
    this->DireStateAtHookedCount = 2;
    this->MidObjectiveStateProgressionRatio = 0.60f;
    this->DefaultChasedPhaseOutDuration = 8.00f;
    this->InjuredChasedPhaseOutDuration = 12.00f;
    this->DefaultBeingAimedAtPhaseOutDuration = 8.00f;
    this->InjuredBeingAimedAtPhaseOutDuration = 12.00f;
    this->StimulusWasInSightDuration = 2.00f;
    this->LoSFoVToStimulusCheckPeriod = 1.00f;
    this->LoSToStimulusValidDuration = 2.00f;
    this->FoVToStimulusValidDuration = 1.00f;
}

