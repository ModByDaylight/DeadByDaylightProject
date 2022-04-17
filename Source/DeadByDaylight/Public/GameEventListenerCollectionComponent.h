#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameEventDelegateDelegate.h"
#include "GameEventListenerCollectionComponent.generated.h"

class UGameEventDispatcher;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGameEventListenerCollectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGameEventListenerCollectionComponent();
    UFUNCTION(BlueprintCallable)
    void UnlistenToGameEvent(FGameplayTag eventType);
    
    UFUNCTION(BlueprintCallable)
    void UnlistenToAllGameEvents();
    
    UFUNCTION(BlueprintCallable)
    void ListenToGameEvent(FGameplayTag eventType, FGameEventDelegate delegateToBind);
    
    UFUNCTION(BlueprintCallable)
    void AttachGameEventDispatcher(UGameEventDispatcher* gameEventDispatcher);
    
};

