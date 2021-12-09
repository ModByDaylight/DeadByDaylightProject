#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "PlayerInteractionListenerComponent.generated.h"

class ADBDPlayer;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FPlayerInteractionListenerComponentInteractionDelegate, ADBDPlayer*, Player, FGameplayTag, interactionSemantic);

UCLASS(BlueprintType)
class DBDGAMEPLAY_API UPlayerInteractionListenerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void UnlistenToInteractionStart(ADBDPlayer* player, const FGameplayTag& interactionSemantic);
    
    UFUNCTION(BlueprintCallable)
    void UnlistenToInteractionEnd(ADBDPlayer* player, const FGameplayTag& interactionSemantic);
    
private:
    UFUNCTION()
    void OnActorDestroyed(AActor* destroyedActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void ListenToInteractionStart(ADBDPlayer* player, const FGameplayTag& interactionSemantic, const FPlayerInteractionListenerComponentInteractionDelegate& interactionDelegate);
    
    UFUNCTION(BlueprintCallable)
    void ListenToInteractionEnd(ADBDPlayer* player, const FGameplayTag& interactionSemantic, const FPlayerInteractionListenerComponentInteractionDelegate& interactionDelegate);
    
    UPlayerInteractionListenerComponent();
};

