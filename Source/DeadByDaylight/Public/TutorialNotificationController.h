#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TutorialNotificationController.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialNotificationControllerOnBlockingNotificationDismissedEvent, FName, tutorialNotificationId);

UCLASS(BlueprintType)
class UTutorialNotificationController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, Transient)
    FTutorialNotificationControllerOnBlockingNotificationDismissedEvent OnBlockingNotificationDismissedEvent;
    
    UFUNCTION(BlueprintCallable)
    void ShowNotification(FName tutorialNotificationId, float duration);
    
    UFUNCTION(BlueprintCallable)
    void ShowBlockingNotification(FName tutorialNotificationId);
    
private:
    UFUNCTION()
    void OnBlockingNotificationDismissed();
    
public:
    UFUNCTION(BlueprintCallable)
    void HideNotification(bool removeAllCachedNotifs);
    
    UTutorialNotificationController();
};

