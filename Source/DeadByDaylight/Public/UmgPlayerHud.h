#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EInputInteractionType.h"
#include "Styling/SlateBrush.h"
#include "UmgPlayerHud.generated.h"

class UCanvasPanel;
class UUMGAlertsWidget;
class UAtlantaSkillCheckWidget;
class UUMGMapThemeWidget;
class UPerkActionButton;
class UUMGObjectivesWidget;
class UUMGEndGameCollapseWidget;
class UPerkHudWidget;
class ADBDPlayer;
class UUMGStatusEffectsWidget;
class UUMGChargeableInteractionWidget;
class UAtlantaPromptWidget;
class UUMGPlayersStatusWidget;
class UVerticalBox;
class UActionButton;
class UPerkSoundHudWidget;
class UMobileBaseUserWidget;
class ADBDPlayerController;
class UAtlantaHudDirectionalStick;
class UInteractionDefinition;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUmgPlayerHudOnPerkClickedEvent, FName, perkId, bool, clickedOnPerksWidget);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUmgPlayerHudOnTutorialLeaveClickedEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUmgPlayerHudOnTutorialNextClickedEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUmgPlayerHudOnSettingsClickedEvent);

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
    FUmgPlayerHudOnPerkClickedEvent OnPerkClickedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FUmgPlayerHudOnTutorialLeaveClickedEvent OnTutorialLeaveClickedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FUmgPlayerHudOnTutorialNextClickedEvent OnTutorialNextClickedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FUmgPlayerHudOnSettingsClickedEvent OnSettingsClickedEvent;
    
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
    
public:
    UUmgPlayerHud();
};

