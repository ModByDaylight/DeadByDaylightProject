#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "TeachableData.h"
#include "InventorySlotData.h"
#include "UObject/NoExportTypes.h"
#include "UMGTeachablePerkButton.generated.h"

class UPerkActionButton;
class UImage;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUMGTeachablePerkButtonOnTeachablePerkTooltipLongPressEvent, const FTeachableData&, teachableData, const FVector2D&, position);

UCLASS(Abstract, EditInlineNew)
class UUMGTeachablePerkButton : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UPerkActionButton* TeachablePerkButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* LockedStatusIcon;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    FTeachableData _teachableData;
    
private:
    UPROPERTY()
    FUMGTeachablePerkButtonOnTeachablePerkTooltipLongPressEvent _onTeachablePerkTooltipLongPressEvent;
    
    UFUNCTION()
    void HandleTooltipLongPressedEvent(const FInventorySlotData& itemData, FVector2D position);
    
public:
    UUMGTeachablePerkButton();
};

