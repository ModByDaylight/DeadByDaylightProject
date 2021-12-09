#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Styling/SlateTypes.h"
#include "Types/SlateEnums.h"
#include "AkPropertyToControl.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AkWwiseItemToControl.h"
#include "AkSlider.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAkSliderOnItemDropped, FGuid, ItemDroppedID);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(float, FAkSliderValueDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAkSliderOnValueChanged, float, Value);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAkSliderOnPropertyDropped, const FString&, PropertyDropped);

UCLASS(DefaultConfig, Config=Editor)
class AKAUDIO_API UAkSlider : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY()
    FAkSliderValueDelegate ValueDelegate;
    
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
    FAkSliderOnValueChanged OnValueChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAkSliderOnItemDropped OnItemDropped;
    
    UPROPERTY(BlueprintAssignable)
    FAkSliderOnPropertyDropped OnPropertyDropped;
    
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
    
    UAkSlider();
};

