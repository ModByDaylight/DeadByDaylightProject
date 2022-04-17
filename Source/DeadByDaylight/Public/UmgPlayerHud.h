#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OnTutorialButtonClickedEventDelegate.h"
#include "EInputInteractionType.h"
#include "OnHudPerkButtonClickedEventDelegate.h"
#include "OnSettingsButtonClickedEventDelegate.h"
#include "Styling/SlateBrush.h"
#include "UmgPlayerHud.generated.h"

class UCanvasPanel;
class UAtlantaSkillCheckWidget;
class UPerkHudWidget;
class UMobileBaseUserWidget;
class UPerkActionButton;
class UUMGMapThemeWidget;
class UUMGAlertsWidget;
class UUMGObjectivesWidget;
class UUMGStatusEffectsWidget;
class UUMGChargeableInteractionWidget;
class UAtlantaPromptWidget;
class UUMGPlayersStatusWidget;
class UVerticalBox;
class UActionButton;
class UPerkSoundHudWidget;
class UUMGEndGameCollapseWidget;
class ADBDPlayerController;
class UAtlantaHudDirectionalStick;
class ADBDPlayer;
class UInteractionDefinition;

UCLASS(Abstract, EditInlineNew)
class UUmgPlayerHud : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* GameStartingPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* InGamePanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UAtlantaSkillCheckWidget* SkillCheckWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGMapThemeWidget* MapThemeWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGAlertsWidget* AtlantaAlertsWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGObjectivesWidget* AtlantaObjectivesWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UPerkHudWidget* AtlantaPerksWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UPerkActionButton* ActivablePerkActionButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGStatusEffectsWidget* AtlantaStatusEffectsWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGChargeableInteractionWidget* AtlantaInteractionWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UAtlantaPromptWidget* AtlantaPromptWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UAtlantaPromptWidget* AtlantaTutorialPromptWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGPlayersStatusWidget* AtlantaPlayersStatusWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* AtlantaObjectivesContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UActionButton* ActionButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ActionButtonContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UPerkSoundHudWidget* PerkSoundHudWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UMobileBaseUserWidget* CenterInteractionButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* CenterInteractionContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* CancelButtonContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGEndGameCollapseWidget* EndGameCollapseWidget;
    
    UPROPERTY(BlueprintAssignable)
    FOnHudPerkButtonClickedEvent OnPerkClickedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnTutorialButtonClickedEvent OnTutorialLeaveClickedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnTutorialButtonClickedEvent OnTutorialNextClickedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnSettingsButtonClickedEvent OnSettingsClickedEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ADBDPlayerController* LocalController;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UAtlantaHudDirectionalStick* AtlantaDirectionalStick;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* AtlantaDirectionalStickContainer;
    
    UPROPERTY(Transient)
    ADBDPlayer* _localPlayer;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush _unlockedVirtualJoystickThumbImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush _lockedVirtualJoystickThumbImage;
    
public:
    UUmgPlayerHud();
protected:
    UFUNCTION(BlueprintCallable)
    void TutorialTallyNextSelected();
    
    UFUNCTION(BlueprintCallable)
    void TutorialTallyLeaveSelected();
    
    UFUNCTION(BlueprintCallable)
    void SetVirtualJoystickThumbImage(bool locked);
    
    UFUNCTION(BlueprintCallable)
    void OnSettingsButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnPerkClicked(FName perkID, bool clickedOnPerksWidget);
    
    UFUNCTION()
    void OnInteractionStarted(UInteractionDefinition* interaction);
    
    UFUNCTION()
    void OnInteractionEnded(UInteractionDefinition* interaction);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitializeHUD();
    
    UFUNCTION(BlueprintPure)
    bool IsInteractionAvailable(EInputInteractionType interactionType) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractionAllowed(UInteractionDefinition* interaction) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintPure)
    FSlateBrush GetInteractionIconByType(EInputInteractionType interactionInputType) const;
    
    UFUNCTION(BlueprintPure)
    UInteractionDefinition* GetCurrentOrAvailableInteractionOfType(EInputInteractionType interactionInputType) const;
    
};

