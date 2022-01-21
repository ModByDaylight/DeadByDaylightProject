#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "InventorySlotData.h"
#include "UMGLobbyOfferingItemWidget.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLobbyOfferingItemWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UUMGLobbyOfferingItemWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetOfferingData(const FInventorySlotData& data);
    
    UFUNCTION()
    void HideOfferingItem();
    
protected:
    UFUNCTION(BlueprintCallable)
    TMap<FName, TSoftObjectPtr<UTexture2D>> GetOfferingIcons();
    
};

