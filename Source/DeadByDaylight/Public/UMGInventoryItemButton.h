#pragma once
#include "CoreMinimal.h"
#include "UMGLoadoutItemButton.h"
#include "UMGInventoryItemButton.generated.h"

class ACollectable;
class UProgressBar;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGInventoryItemButton : public UUMGLoadoutItemButton {
    GENERATED_BODY()
public:
    UUMGInventoryItemButton();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateItemButtonProgressBar(ACollectable* item, UProgressBar* itemProgressBar);
    
    UFUNCTION(BlueprintCallable)
    void UpdateItemButton(ACollectable* item);
    
};

