#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "ELoadoutSlot.h"
#include "InventorySlotData.h"
#include "UObject/NoExportTypes.h"
#include "UMGLoadoutBaseWidget.generated.h"

class UUMGLoadoutItemButton;

UCLASS(EditInlineNew)
class UUMGLoadoutBaseWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLoadoutItemButton* ItemOrPowerButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLoadoutItemButton* AddonFirstButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLoadoutItemButton* AddonSecondButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLoadoutItemButton* OfferingButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLoadoutItemButton* PerkFirstButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLoadoutItemButton* PerkSecondButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLoadoutItemButton* PerkThirdButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLoadoutItemButton* PerkFourthButton;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TArray<UUMGLoadoutItemButton*> LoadoutItemButtons;
    
    UPROPERTY(BlueprintReadOnly)
    bool UsingMatchRules;
    
    UPROPERTY(BlueprintReadOnly)
    bool PerkSlotsLockedByAdmin;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsSlasher;
    
public:
    UUMGLoadoutBaseWidget();
    UFUNCTION(BlueprintCallable)
    void SetLoadoutData(const TArray<FInventorySlotData>& loadoutData, bool NewUsingMatchRules, bool NewPerkSlotsLockedByAdmin, ELoadoutSlot loadoutSlot, bool NewIsSlasher, bool isClickable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsSelectedLoadoutItemButton(ELoadoutSlot loadoutSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDividerImageColor(FLinearColor color);
    
};

