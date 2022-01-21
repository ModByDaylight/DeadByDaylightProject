#pragma once
#include "CoreMinimal.h"
#include "TutorialPopupViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "NotifTutoConfirmButtonClickDelegate.h"
#include "CoreTutorialPopupWidget.generated.h"

class UAkAudioEvent;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreTutorialPopupWidget : public UCoreBaseHudWidget, public ITutorialPopupViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ClosePopupSfx;
    
private:
    UPROPERTY(BlueprintCallable)
    FNotifTutoConfirmButtonClickDelegate _notifTutoConfirmButtonClickDelegate;
    
public:
    UCoreTutorialPopupWidget();
    
    // Fix for true pure virtual functions not being implemented
};

