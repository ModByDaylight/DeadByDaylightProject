#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGAtlantaRequestRoleButton.generated.h"

class UWidgetSwitcher;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGAtlantaRequestRoleButton : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UWidgetSwitcher* IconSwitcher;
    
public:
    UUMGAtlantaRequestRoleButton();
protected:
    UFUNCTION(BlueprintCallable)
    void SetIsActive(bool isActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleActiveState(bool isActive);
    
    UFUNCTION(BlueprintPure)
    bool GetIsActive() const;
    
};

