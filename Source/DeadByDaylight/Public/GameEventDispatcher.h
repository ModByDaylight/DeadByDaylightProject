#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameEventDispatcherHandleBP.h"
#include "GameEventData.h"
#include "GameEventDispatcher.generated.h"

class UOngoingGameEvent;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UGameEventDispatcher : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UOngoingGameEvent*> _ongoingEvents;
    
public:
    UGameEventDispatcher();
private:
    UFUNCTION(BlueprintCallable)
    void UnregisterListener(const FGameEventDispatcherHandleBP& gameEventDispatcherHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemotelyDispatch(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterListener(const FGameEventDispatcherHandleBP& gameEventDispatcherHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    void LocallyDispatch(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION(BlueprintCallable)
    void Authority_RemotelyDispatch(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION(BlueprintCallable)
    void Authority_AccumulateOngoingGameEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData, float ongoingWaitTime);
    
};

