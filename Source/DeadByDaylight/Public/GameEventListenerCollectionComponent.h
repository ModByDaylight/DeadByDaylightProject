#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "GameEventListenerCollectionComponent.generated.h"

class UGameEventDispatcher;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGameEventListenerCollectionComponentDelegateToBind, const FGameplayTag, gameEventType, const FGameEventData&, gameEventData);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UGameEventListenerCollectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void UnlistenToGameEvent(FGameplayTag eventType);
    
    UFUNCTION(BlueprintCallable)
    void UnlistenToAllGameEvents();
    
    UFUNCTION(BlueprintCallable)
    void ListenToGameEvent(FGameplayTag eventType, FGameEventListenerCollectionComponentDelegateToBind delegateToBind);
    
    UFUNCTION(BlueprintCallable)
    void AttachGameEventDispatcher(UGameEventDispatcher* gameEventDispatcher);
    
    UGameEventListenerCollectionComponent();
};

