#pragma once
#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "UMGAtlantaFreeTicketConfirmToUsePopup.generated.h"

class UTexture2D;
class UUMGRichTextFreeTicketDecorator;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaFreeTicketConfirmToUsePopup : public UUMGGenericPopup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* FreeTicketIcon;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FText PopupTitleContent;
    
    UUMGAtlantaFreeTicketConfirmToUsePopup();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetPopupTitle(const FText& characterName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFreeTicketIconTexture(bool isSlasher);
    
    UFUNCTION(BlueprintImplementableEvent)
    UUMGRichTextFreeTicketDecorator* GetDecorator();
    
};

