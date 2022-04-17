#pragma once
#include "CoreMinimal.h"
#include "AkBoolPropertyToControl.h"
#include "Components/ContentWidget.h"
#include "Styling/SlateTypes.h"
#include "AkWwiseItemToControl.h"
#include "Styling/SlateTypes.h"
#include "Components/Widget.h"
#include "AkOnCheckBoxComponentStateChangedDelegate.h"
#include "Types/SlateEnums.h"
#include "OnWwiseItemDropDetectedDelegate.h"
#include "OnBoolPropertyDropDetectedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "AkCheckBox.generated.h"

UCLASS(DefaultConfig, Config=Editor)
class AKAUDIO_API UAkCheckBox : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECheckBoxState CheckedState;
    
    UPROPERTY()
    UWidget::FGetCheckBoxState CheckedStateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCheckBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(EditAnywhere)
    FAkBoolPropertyToControl ThePropertyToControl;
    
    UPROPERTY(Config, VisibleAnywhere)
    FAkWwiseItemToControl ItemToControl;
    
    UPROPERTY(BlueprintAssignable)
    FAkOnCheckBoxComponentStateChanged AkOnCheckStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnWwiseItemDropDetected OnItemDropped;
    
    UPROPERTY(BlueprintAssignable)
    FOnBoolPropertyDropDetected OnPropertyDropped;
    
    UAkCheckBox();
    UFUNCTION(BlueprintCallable)
    void SetIsChecked(bool InIsChecked);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckedState(ECheckBoxState InCheckedState);
    
    UFUNCTION(BlueprintCallable)
    void SetAkItemId(const FGuid& ItemId);
    
    UFUNCTION(BlueprintCallable)
    void SetAkBoolProperty(const FString& ItemProperty);
    
    UFUNCTION(BlueprintPure)
    bool IsPressed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsChecked() const;
    
    UFUNCTION(BlueprintPure)
    ECheckBoxState GetCheckedState() const;
    
    UFUNCTION(BlueprintPure)
    FString GetAkProperty() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetAkItemId() const;
    
};

