#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "PlayerInteractionListenerComponent.generated.h"

class ADBDPlayer;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UPlayerInteractionListenerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractionMulticastDelegate, ADBDPlayer*, player, FGameplayTag, interactionSemantic);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FInteractionDelegate, ADBDPlayer*, Player, FGameplayTag, interactionSemantic);
    
    UPlayerInteractionListenerComponent();
    UFUNCTION(BlueprintCallable)
    void UnlistenToInteractionStart(ADBDPlayer* player, const FGameplayTag& interactionSemantic);
    
    UFUNCTION(BlueprintCallable)
    void UnlistenToInteractionEnd(ADBDPlayer* player, const FGameplayTag& interactionSemantic);
    
private:
    UFUNCTION()
    void OnActorDestroyed(AActor* destroyedActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void ListenToInteractionStart(ADBDPlayer* player, const FGameplayTag& interactionSemantic, const UPlayerInteractionListenerComponent::FInteractionDelegate& interactionDelegate);
    
    UFUNCTION(BlueprintCallable)
    void ListenToInteractionEnd(ADBDPlayer* player, const FGameplayTag& interactionSemantic, const UPlayerInteractionListenerComponent::FInteractionDelegate& interactionDelegate);
    
};

