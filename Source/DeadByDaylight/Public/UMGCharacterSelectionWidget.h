#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnCharacterSelectedEventDelegate.h"
#include "OnCharacterRoleButtonClickedEventDelegate.h"
#include "OnCharacterInfoButtonClickedEventDelegate.h"
#include "UMGCharacterSelectionWidget.generated.h"

class UUMGCharacterSelectSubmenu;
class UUMGCharacterPageScrollWidget;
class UUMGCharacterInfoWidget;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterSelectionWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnCharacterSelectedEvent OnCharacterSelected;
    
    UPROPERTY(BlueprintAssignable)
    FOnCharacterRoleButtonClickedEvent OnCharacterRoleButtonClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnCharacterInfoButtonClickedEvent OnCharacterInfoButtonClicked;
    
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
    
public:
    UUMGCharacterSelectionWidget();
protected:
    UFUNCTION()
    void SwitchPanel();
    
    UFUNCTION()
    void BroadcastSelectedCharacter(int32 characterIndex);
    
    UFUNCTION()
    void BroadcastRoleButtonClicked();
    
};

