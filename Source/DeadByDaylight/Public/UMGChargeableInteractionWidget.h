#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "StatusEffectSlotData.h"
#include "EBarColor.h"
#include "UMGChargeableInteractionWidget.generated.h"

class UImage;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGChargeableInteractionWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    ESlateVisibility InteractionIconVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    ESlateVisibility ItemChargeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    ESlateVisibility InteractionHudVisibility;
    
public:
    UUMGChargeableInteractionWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetSecondaryMessage(const FString& secondMessage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetProgressbarValue(float value);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SetProgressBarColor(const EBarColor barColor);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetProficiencyData(int32 index, const FStatusEffectSlotData& proficiencyData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOpacity(float opacity);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMessage(const FString& message);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetItemChargeValue(float value);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SetItemChargeColor(const EBarColor barColor);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ClearProficienciesData();
    
};

