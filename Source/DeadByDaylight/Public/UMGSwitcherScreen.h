#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGSwitcherScreen.generated.h"

class UUMGCharacterSelectionWidget;
class UWidgetSwitcher;
class UUMGBloodStoreWidget;
class UUMGLoadoutWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGSwitcherScreenOnLoadoutWidgetSlotClicked, int32, slotID);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGSwitcherScreenOnLoadoutWidgetInventoryItemSelected, int32, itemIndex);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGSwitcherScreenOnLoadoutWidgetInventoryItemUnselected, int32, itemIndex);

UCLASS(Abstract, EditInlineNew)
class UUMGSwitcherScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUMGSwitcherScreenOnLoadoutWidgetSlotClicked OnLoadoutWidgetSlotClicked;
    
    UPROPERTY(BlueprintAssignable)
    FUMGSwitcherScreenOnLoadoutWidgetInventoryItemSelected OnLoadoutWidgetInventoryItemSelected;
    
    UPROPERTY(BlueprintAssignable)
    FUMGSwitcherScreenOnLoadoutWidgetInventoryItemUnselected OnLoadoutWidgetInventoryItemUnselected;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetSwitcher* ContainerWidgetSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBloodStoreWidget* BloodStoreWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLoadoutWidget* LoadoutWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCharacterSelectionWidget* CharacterSelectionWidget;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastSlotClickedEvent(int32 loadoutSlot);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastItemUnSelectedEvent(int32 itemIndex);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastItemSelectedEvent(int32 itemIndex);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastCharacterSelectedEvent(int32 characterIndex);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastCharacterRoleButtonClickedEvent();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastCharacterInfoButtonClickedEvent();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastBloodStoreRegenerate(int32 characterId);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastBloodNodeSelected(int32 characterId, int32 nodeId, int32 nodeDepth);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastBloodNodePurchase(int32 characterId);
    
public:
    UUMGSwitcherScreen();
};

