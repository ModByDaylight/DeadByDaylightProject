#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnBloodNodeSelectedEventDelegate.h"
#include "OnBloodNodePurchaseEventDelegate.h"
#include "OnBloodStoreRegenerateEventDelegate.h"
#include "OnCharacterRoleButtonClickedEventDelegate.h"
#include "UMGBloodStoreWidget.generated.h"

class UUMGBloodStoreSubMenu;
class UUMGBloodStoreArrayWidget;
class UUMGBloodStoreItemPreviewWidget;

UCLASS(EditInlineNew)
class UUMGBloodStoreWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnBloodNodeSelectedEvent OnBloodNodeSelected;
    
    UPROPERTY(BlueprintAssignable)
    FOnBloodNodePurchaseEvent OnBloodNodePurchase;
    
    UPROPERTY(BlueprintAssignable)
    FOnBloodStoreRegenerateEvent OnBloodStoreRegenerate;
    
    UPROPERTY(BlueprintAssignable)
    FOnCharacterRoleButtonClickedEvent OnCharacterRoleButtonClicked;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBloodStoreArrayWidget* BloodStoreArrayWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBloodStoreItemPreviewWidget* ItemPreviewWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBloodStoreSubMenu* BloodStoreSubMenuWidget;
    
    UPROPERTY(BlueprintReadOnly)
    FText _bloodStoreTitle;
    
    UPROPERTY(BlueprintReadOnly)
    FText _killersTitle;
    
    UPROPERTY(BlueprintReadOnly)
    FText _survivorsTitle;
    
public:
    UUMGBloodStoreWidget();
private:
    UFUNCTION()
    void UnselectNode();
    
    UFUNCTION()
    void SwitchRole();
    
    UFUNCTION()
    void SetSelectedNode(const FString& selectedId);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetFaction(bool isKiller);
    
private:
    UFUNCTION()
    void RegenerateBloodStore();
    
    UFUNCTION()
    void PurchaseSelectedNode();
    
};

