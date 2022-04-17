#pragma once
#include "CoreMinimal.h"
#include "Components/PanelSlot.h"
#include "Layout/Margin.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "AspectRatioBoxSlot.generated.h"

UCLASS(BlueprintType)
class DBDUIVIEWSCORE_API UAspectRatioBoxSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UAspectRatioBoxSlot();
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin inPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);
    
};

