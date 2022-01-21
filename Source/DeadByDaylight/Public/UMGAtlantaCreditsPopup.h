#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaCreditsPopup.generated.h"

class UUMGHtmlRichText;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaCreditsPopup : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGHtmlRichText* RichTitleText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGHtmlRichText* RichContentText;
    
    UPROPERTY(EditAnywhere)
    FString _titleDefaultStyle;
    
public:
    UUMGAtlantaCreditsPopup();
    UFUNCTION(BlueprintCallable)
    void SetCreditTitle(const FString& title);
    
    UFUNCTION(BlueprintCallable)
    void SetCreditContent(const FString& content);
    
};

