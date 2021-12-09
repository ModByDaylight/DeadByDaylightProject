#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCharacterFreeTicketButton.generated.h"

class UWidgetSwitcher;
class UTextBlock;
class UImage;

UCLASS(EditInlineNew)
class UUMGCharacterFreeTicketButton : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetSwitcher* ButtonSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* FreeTicketLeftSecondsText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* FreeTicketLeftSecondsBG;
    
public:
    UUMGCharacterFreeTicketButton();
};

