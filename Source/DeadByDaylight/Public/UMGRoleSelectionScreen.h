#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "ERoleSelectionScreenButton.h"
#include "UMGRoleSelectionScreen.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGRoleSelectionScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 _newInboxMessageCount;
    
public:
    UUMGRoleSelectionScreen();
    UFUNCTION(BlueprintCallable)
    void ButtonClickEvent(ERoleSelectionScreenButton buttonId);
    
};

