#pragma once
#include "CoreMinimal.h"
#include "Components/PanelSlot.h"
#include "Layout/Margin.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "DBDWrapBoxSlot.generated.h"

UCLASS(BlueprintType)
class DBDUIVIEWSCORE_API UDBDWrapBoxSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFillEmptySpace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FillSpanWhenLessThan;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UDBDWrapBoxSlot();
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
    
    UFUNCTION(BlueprintCallable)
    void SetFillEmptySpace(bool InbFillEmptySpace);
    
};

