#pragma once
#include "CoreMinimal.h"
#include "UMGMenuBaseBanner.h"
#include "UMGMenuEventsBanner.generated.h"

class UImage;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGMenuEventsBanner : public UUMGMenuBaseBanner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* EventsIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* FallbackTitle;
    
public:
    UUMGMenuEventsBanner();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetDefaultWidgetLayout();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCustomWidgetLayout();
    
};

