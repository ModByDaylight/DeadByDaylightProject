#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGAtlantaEventsTab.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaEventsTab : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FString _eventId;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* HotTagText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* NewTagText;
    
public:
    UUMGAtlantaEventsTab();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectionVisuals(bool isSelected);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetNewTag();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetHotTag();
    
};

