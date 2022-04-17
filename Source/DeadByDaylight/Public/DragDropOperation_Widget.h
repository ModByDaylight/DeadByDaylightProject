#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/DragDropOperation.h"
#include "Widgets/Layout/Anchors.h"
#include "Layout/Margin.h"
#include "DragDropOperation_Widget.generated.h"

class UPanelWidget;
class UUMGDragWidget;

UCLASS()
class DEADBYDAYLIGHT_API UDragDropOperation_Widget : public UDragDropOperation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UUMGDragWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UPanelWidget* WidgetParent;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D StartPosition;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D WidgetLocalScale;
    
    UPROPERTY(BlueprintReadWrite)
    float WidgetLocalOpacity;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D OnDropOffset;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D OnDragOffset;
    
    UPROPERTY(BlueprintReadWrite)
    FAnchors WidgetSlotAnchors;
    
    UPROPERTY(BlueprintReadWrite)
    FMargin WidgetSlotOffsets;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D WidgetSlotPosition;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D WidgetSlotSize;
    
    UPROPERTY(BlueprintReadWrite)
    bool WidgetSlotAutoSize;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D WidgetSlotAlignment;
    
    UPROPERTY(BlueprintReadWrite)
    int32 WidgetSlotZOrder;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UUMGDragWidget* ChildLinkWidget;
    
    UDragDropOperation_Widget();
};

