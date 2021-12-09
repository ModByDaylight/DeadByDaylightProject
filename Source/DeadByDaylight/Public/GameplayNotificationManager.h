#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayNotificationData.h"
#include "GameplayNotificationManager.generated.h"

class UGameplayModifierContainer;

UCLASS(BlueprintType)
class UGameplayNotificationManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_FireGameplayNotification(const UGameplayModifierContainer* modifierContainer, bool addToHistory);
    
public:
    UFUNCTION(BlueprintCallable)
    void FireGameplayNotification(const FGameplayNotificationData& notificationData, bool addToHistory);
    
    UGameplayNotificationManager();
};

