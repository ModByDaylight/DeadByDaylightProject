#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnLoadoutWidgetSlotClickedEventDelegate.h"
#include "OnLoadoutWidgetInventoryItemSelectedEventDelegate.h"
#include "OnLoadoutWidgetInventoryItemUnselectedEventDelegate.h"
#include "UMGSwitcherScreen.generated.h"

class UUMGBloodStoreWidget;
class UUMGCharacterSelectionWidget;
class UUMGLoadoutWidget;
class UWidgetSwitcher;

UCLASS(Abstract, EditInlineNew)
class UUMGSwitcherScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnLoadoutWidgetSlotClickedEvent OnLoadoutWidgetSlotClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnLoadoutWidgetInventoryItemSelectedEvent OnLoadoutWidgetInventoryItemSelected;
    
    UPROPERTY(BlueprintAssignable)
    FOnLoadoutWidgetInventoryItemUnselectedEvent OnLoadoutWidgetInventoryItemUnselected;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetSwitcher* ContainerWidgetSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBloodStoreWidget* BloodStoreWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLoadoutWidget* LoadoutWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCharacterSelectionWidget* CharacterSelectionWidget;
    
public:
    UUMGSwitcherScreen();
protected:
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
    
};

