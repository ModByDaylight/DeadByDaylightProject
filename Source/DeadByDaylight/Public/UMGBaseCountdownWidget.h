#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGBaseCountdownWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBaseCountdownWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UTextBlock* TimerTextBlock;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _timerThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor _timerColorBelowThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor _timerColorBeyondThreshold;
    
public:
    UUMGBaseCountdownWidget();
};

