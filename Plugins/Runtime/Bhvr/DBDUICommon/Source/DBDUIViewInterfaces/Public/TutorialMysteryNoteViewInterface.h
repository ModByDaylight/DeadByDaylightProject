#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NotifTutorialPopupViewData.h"
#include "TutorialMysteryNoteViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UTutorialMysteryNoteViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ITutorialMysteryNoteViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowMysteryNote(const FNotifTutorialPopupViewData& notifData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideMysteryNote();
    
};

