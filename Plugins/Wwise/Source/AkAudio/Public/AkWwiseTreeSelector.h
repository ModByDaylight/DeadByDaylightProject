#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "UObject/NoExportTypes.h"
#include "AkWwiseTreeSelector.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAkWwiseTreeSelectorOnSelectionChanged, FGuid, ItemSelectedID);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAkWwiseTreeSelectorOnItemDragged, FGuid, ItemDraggedID, const FString&, ItemDraggedName);

UCLASS(DefaultConfig, Config=Editor)
class AKAUDIO_API UAkWwiseTreeSelector : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAkWwiseTreeSelectorOnSelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAkWwiseTreeSelectorOnItemDragged OnItemDragged;
    
    UAkWwiseTreeSelector();
};

