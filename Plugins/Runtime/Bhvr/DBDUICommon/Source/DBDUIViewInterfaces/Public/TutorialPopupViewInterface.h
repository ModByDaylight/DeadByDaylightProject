#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NotifTutorialPopupViewData.h"
#include "TutorialPopupViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UTutorialPopupViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ITutorialPopupViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowNotifTutorialPopup(const FNotifTutorialPopupViewData& notifTutoData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideTutorialPopup(bool playSoundEffect);
    
};

