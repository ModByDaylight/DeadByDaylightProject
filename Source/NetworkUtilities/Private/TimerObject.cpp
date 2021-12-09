#include "TimerObject.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UTimerObject;

void UTimerObject::OnRep_TimerDataUpdated(FReplicationTimerData oldData) {
}

bool UTimerObject::IsTimerActive() const {
    return false;
}

bool UTimerObject::IsPaused() const {
    return false;
}

bool UTimerObject::IsDone() const {
    return false;
}

float UTimerObject::GetRemainingTimePercent() const {
    return 0.0f;
}

float UTimerObject::GetRemainingTime() const {
    return 0.0f;
}

float UTimerObject::GetElapsedTimePercent() const {
    return 0.0f;
}

float UTimerObject::GetElapsedTime() const {
    return 0.0f;
}

float UTimerObject::GetDuration() const {
    return 0.0f;
}

UTimerObject* UTimerObject::CreateTimer(AActor* owner) {
    return NULL;
}

void UTimerObject::Authority_Unpause() {
}

void UTimerObject::Authority_Start(float duration) {
}

void UTimerObject::Authority_SetPaused(bool paused) {
}

void UTimerObject::Authority_Pause() {
}

void UTimerObject::Authority_Clear() {
}

void UTimerObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTimerObject, _replicationData);
}

UTimerObject::UTimerObject() {
}

