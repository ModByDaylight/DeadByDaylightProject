#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGBloodStoreTimer.generated.h"

class UTextBlock;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGBloodStoreTimer : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor _normalColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor _warningColor;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* RemainingTimeTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* RefreshImage;
    
public:
    UUMGBloodStoreTimer();
};

