#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Components/ContentWidget.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateTypes.h"
#include "AkBoolPropertyToControl.h"
#include "UObject/NoExportTypes.h"
#include "AkWwiseItemToControl.h"
#include "AkCheckBox.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(ECheckBoxState, FAkCheckBoxCheckedStateDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAkCheckBoxAkOnCheckStateChanged, bool, bIsChecked);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAkCheckBoxOnItemDropped, FGuid, ItemDroppedID);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAkCheckBoxOnPropertyDropped, const FString&, PropertyDropped);

UCLASS(DefaultConfig, Config=Editor)
class AKAUDIO_API UAkCheckBox : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECheckBoxState CheckedState;
    
    UPROPERTY()
    FAkCheckBoxCheckedStateDelegate CheckedStateDelegate;
    
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
    FAkCheckBoxAkOnCheckStateChanged AkOnCheckStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAkCheckBoxOnItemDropped OnItemDropped;
    
    UPROPERTY(BlueprintAssignable)
    FAkCheckBoxOnPropertyDropped OnPropertyDropped;
    
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
    
    UAkCheckBox();
};

