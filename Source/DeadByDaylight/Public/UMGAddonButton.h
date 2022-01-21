#pragma once
#include "CoreMinimal.h"
#include "UMGInventoryItemButton.h"
#include "UMGAddonButton.generated.h"

class UItemAddon;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAddonButton : public UUMGInventoryItemButton {
    GENERATED_BODY()
public:
    UUMGAddonButton();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateAddonButton(UItemAddon* addon);
    
};

