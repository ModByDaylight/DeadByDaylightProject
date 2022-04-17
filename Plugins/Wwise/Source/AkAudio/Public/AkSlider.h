#pragma once
#include "CoreMinimal.h"
#include "AkWwiseItemToControl.h"
#include "Components/Widget.h"
#include "Components/Widget.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateTypes.h"
#include "Types/SlateEnums.h"
#include "AkPropertyToControl.h"
#include "AkOnFloatValueChangedEventDelegate.h"
#include "OnItemDropDetectedDelegate.h"
#include "OnPropertyDropDetectedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "AkSlider.generated.h"

UCLASS(DefaultConfig, Config=Editor)
class AKAUDIO_API UAkSlider : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY()
    UWidget::FGetFloat ValueDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSliderStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SliderBarColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SliderHandleColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool IndentHandle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool Locked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StepSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(VisibleAnywhere)
    FAkPropertyToControl ThePropertyToControl;
    
    UPROPERTY(Config, VisibleAnywhere)
    FAkWwiseItemToControl ItemToControl;
    
    UPROPERTY(BlueprintAssignable)
    FAkOnFloatValueChangedEvent OnValueChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemDropDetected OnItemDropped;
    
    UPROPERTY(BlueprintAssignable)
    FOnPropertyDropDetected OnPropertyDropped;
    
    UAkSlider();
    UFUNCTION(BlueprintCallable)
    void SetValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSize(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderHandleColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderBarColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIndentHandle(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAkSliderItemProperty(const FString& ItemProperty);
    
    UFUNCTION(BlueprintCallable)
    void SetAkSliderItemId(const FGuid& ItemId);
    
    UFUNCTION(BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintPure)
    FString GetAkSliderItemProperty() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetAkSliderItemId() const;
    
};

