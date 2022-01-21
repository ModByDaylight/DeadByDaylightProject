#include "DBDGameEventUtilities.h"

class UObject;
class ADBDPlayer;
class AActor;

void UDBDGameEventUtilities::RemotelyDispatchGameEvent(const UObject* worldContextObject, const FGameplayTag gameEventType, ADBDPlayer* instigator, AActor* target, float customValue, UObject* customObjectParameter, int32 customIntValue) {
}

void UDBDGameEventUtilities::LocallyDispatchGameEvent(const UObject* worldContextObject, const FGameplayTag gameEventType, ADBDPlayer* instigator, AActor* target, float customValue, UObject* customObjectParameter, int32 customIntValue) {
}

void UDBDGameEventUtilities::FireGameEvent(const UObject* worldContextObject, EDBDScoreTypes scoreType, float amount, AActor* instigator, AActor* target) {
}

void UDBDGameEventUtilities::DispatcherFireGameEvent(const UObject* worldContextObject, const FGameplayTag gameEventType, bool broadcastOverNetwork, ADBDPlayer* instigator, AActor* target, float customValue, UObject* customObjectParameter, int32 customIntValue) {
}

void UDBDGameEventUtilities::Authority_DispatcherFireGameEvent(const UObject* worldContextObject, const FGameplayTag gameEventType, bool broadcastOverNetwork, ADBDPlayer* instigator, AActor* target, float customValue, UObject* customObjectParameter, int32 customIntValue) {
}

void UDBDGameEventUtilities::Authority_AccumulateOngoingGameEvent(const UObject* worldContextObject, const FGameplayTag gameEventType, ADBDPlayer* instigator, AActor* target, float customValue, float ongoingWaitTime, UObject* customObjectParameter, int32 customIntValue) {
}

UDBDGameEventUtilities::UDBDGameEventUtilities() {
}

