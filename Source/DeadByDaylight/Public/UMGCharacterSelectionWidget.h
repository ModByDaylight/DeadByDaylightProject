#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCharacterSelectionWidget.generated.h"

class UUMGCharacterSelectSubmenu;
class UUMGCharacterPageScrollWidget;
class UUMGCharacterInfoWidget;
class UWidgetSwitcher;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGCharacterSelectionWidgetOnCharacterSelected, int32, charIndex);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUMGCharacterSelectionWidgetOnCharacterRoleButtonClicked);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUMGCharacterSelectionWidgetOnCharacterInfoButtonClicked);

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterSelectionWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUMGCharacterSelectionWidgetOnCharacterSelected OnCharacterSelected;
    
    UPROPERTY(BlueprintAssignable)
    FUMGCharacterSelectionWidgetOnCharacterRoleButtonClicked OnCharacterRoleButtonClicked;
    
    UPROPERTY(BlueprintAssignable)
    FUMGCharacterSelectionWidgetOnCharacterInfoButtonClicked OnCharacterInfoButtonClicked;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCharacterPageScrollWidget* CharacterPageScrollWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCharacterSelectSubmenu* CharacterSelectSubMenu;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCharacterInfoWidget* CharacterInfoWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetSwitcher* CharacterSwitcher;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isKiller;
    
    UFUNCTION()
    void SwitchPanel();
    
    UFUNCTION()
    void BroadcastSelectedCharacter(int32 characterIndex);
    
    UFUNCTION()
    void BroadcastRoleButtonClicked();
    
public:
    UUMGCharacterSelectionWidget();
};

