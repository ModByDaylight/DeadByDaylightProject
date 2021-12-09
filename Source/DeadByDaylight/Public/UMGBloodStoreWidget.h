#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGBloodStoreWidget.generated.h"

class UUMGBloodStoreArrayWidget;
class UUMGBloodStoreItemPreviewWidget;
class UUMGBloodStoreSubMenu;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUMGBloodStoreWidgetOnBloodNodeSelected, int32, characterId, int32, nodeId, int32, nodeDepth);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGBloodStoreWidgetOnBloodStoreRegenerate, int32, characterId);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGBloodStoreWidgetOnBloodNodePurchase, int32, characterId);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUMGBloodStoreWidgetOnCharacterRoleButtonClicked);

UCLASS(EditInlineNew)
class UUMGBloodStoreWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUMGBloodStoreWidgetOnBloodNodeSelected OnBloodNodeSelected;
    
    UPROPERTY(BlueprintAssignable)
    FUMGBloodStoreWidgetOnBloodNodePurchase OnBloodNodePurchase;
    
    UPROPERTY(BlueprintAssignable)
    FUMGBloodStoreWidgetOnBloodStoreRegenerate OnBloodStoreRegenerate;
    
    UPROPERTY(BlueprintAssignable)
    FUMGBloodStoreWidgetOnCharacterRoleButtonClicked OnCharacterRoleButtonClicked;
    
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
    
public:
    UUMGBloodStoreWidget();
};

