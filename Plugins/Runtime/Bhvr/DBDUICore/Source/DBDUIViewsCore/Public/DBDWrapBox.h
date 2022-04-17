#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Components/PanelWidget.h"
#include "UObject/NoExportTypes.h"
#include "DBDWrapBox.generated.h"

class UWidget;
class UDBDWrapBoxSlot;

UCLASS()
class DBDUIVIEWSCORE_API UDBDWrapBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D InnerSlotPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WrapWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bExplicitWrapWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UDBDWrapBox();
    UFUNCTION(BlueprintCallable)
    void SetInnerSlotPadding(FVector2D InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UFUNCTION(BlueprintCallable)
    UDBDWrapBoxSlot* AddChildToWrapBox(UWidget* Content);
    
};

