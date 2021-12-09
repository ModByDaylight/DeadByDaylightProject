#pragma once
#include "CoreMinimal.h"
#include "UMGBaseCountdownWidget.h"
#include "UMGPartyCountdownWidget.generated.h"

class UButton;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPartyCountdownWidget : public UUMGBaseCountdownWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UButton* UnreadyButton;
    
    UPROPERTY(Export)
    UCanvasPanel* UnreadyButtonContainer;
    
private:
    UFUNCTION()
    void OnUnreadyButtonClicked();
    
public:
    UUMGPartyCountdownWidget();
};

