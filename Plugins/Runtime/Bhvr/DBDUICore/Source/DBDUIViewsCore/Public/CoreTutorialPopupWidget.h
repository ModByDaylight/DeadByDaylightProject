#pragma once
#include "CoreMinimal.h"
#include "TutorialPopupViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreTutorialPopupWidget.generated.h"

class UAkAudioEvent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCoreTutorialPopupWidgetNotifTutoConfirmButtonClickDelegate);

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreTutorialPopupWidget : public UCoreBaseHudWidget, public ITutorialPopupViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ClosePopupSfx;
    
private:
    UPROPERTY(BlueprintCallable)
    FCoreTutorialPopupWidgetNotifTutoConfirmButtonClickDelegate _notifTutoConfirmButtonClickDelegate;
    
public:
    UCoreTutorialPopupWidget();
};

