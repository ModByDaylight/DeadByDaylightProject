#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaLegalMenuScreen.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAtlantaLegalMenuScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UUMGAtlantaLegalMenuScreen();
    UFUNCTION(BlueprintImplementableEvent)
    void SetLegalText(const FString& title, const FString& legalText);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonText(const FText& acceptText, const FText& declineText);
    
    UFUNCTION(BlueprintCallable)
    void HandleMenuButtonClickEvent(bool isAccept);
    
};

