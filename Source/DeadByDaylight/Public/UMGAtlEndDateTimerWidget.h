#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlEndDateTimerWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlEndDateTimerWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UTextBlock* TextEndIn;
    
public:
    UUMGAtlEndDateTimerWidget();
};

