#pragma once
#include "CoreMinimal.h"
#include "UMGLoadoutItemButton.h"
#include "Components/SlateWrapperTypes.h"
#include "PerkActionButton.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UPerkActionButton : public UUMGLoadoutItemButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TextUnlockLevelTitle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool Activatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    ESlateVisibility SelectedImageVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    ESlateVisibility ClickableButtonVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    ESlateVisibility ClickableImageVisibility;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility ProgressbarVisibility;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float IdleTime;
    
    UPerkActionButton();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateWidgetPercentage(float percentage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsActivatable(bool isClickable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCanEverBeActivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CallSetPerkLevel(const int32 level);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CallHidePerkLevel();
    
};

