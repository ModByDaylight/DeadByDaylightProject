#pragma once
#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "ReportPlayerPopupScreen.generated.h"

UCLASS()
class UReportPlayerPopupScreen : public UGenericPopupScreen {
    GENERATED_BODY()
public:
    UReportPlayerPopupScreen();
private:
    UFUNCTION()
    void OnTextInputMouseOver(bool isMouseOver);
    
    UFUNCTION()
    void OnConfirmReportPlayer(const FString& category, const FString& comment);
    
};

