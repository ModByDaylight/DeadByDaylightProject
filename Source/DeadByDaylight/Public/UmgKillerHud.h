#pragma once
#include "CoreMinimal.h"
#include "UmgPlayableHud.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "EInputInteractionType.h"
#include "EInventoryType.h"
#include "UmgKillerHud.generated.h"

class ASlasherPlayer;
class UPowerButton;
class UCanvasPanel;
class UAtlantaHudPowerAttackJoystick;
class UActionButton;
class UMobileBaseUserWidget;
class UUMGGhostfaceSpecific;
class ACollectable;
class UInteractionDefinition;

UCLASS(Abstract, EditInlineNew)
class UUmgKillerHud : public UUmgPlayableHud {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UPowerButton* PowerButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* PowerButtonContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UPowerButton* SecondAbilityButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SecondAbilityButtonContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UActionButton* AttackButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* AttackButtonContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UActionButton* DropSurvivorButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* DropSurvivorButtonContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UMobileBaseUserWidget* CancelButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGGhostfaceSpecific* GhostfaceSpecific;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SecondAttackButtonContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UAtlantaHudPowerAttackJoystick* HudPowerAttackJoystick;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ASlasherPlayer* Killer;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool _isCancelButtonPressed;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool _isAttackButtonPressed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isAttackJoystickActivated;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isPowerAttackJoystickActivated;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush _powerAttackJoystickBackgroundImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush _DefaultAttackJoystickIconPressedImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush _DefaultAttackJoystickIconUnpressedImage;
    
    UPROPERTY(EditAnywhere)
    FVector2D _powerAttackJoystickThumbPressedSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D _powerAttackJoystickThumbUnpressedSize;
    
public:
    UUmgKillerHud();
private:
    UFUNCTION()
    void UpdatePowerButtonTier(int32 previousTier, int32 currentTier, bool isFirstTime);
    
    UFUNCTION(BlueprintPure)
    bool ShouldShowInteractionHighlight(EInputInteractionType interactionType) const;
    
protected:
    UFUNCTION()
    void SetPowerIconFromItem(ACollectable* item, EInventoryType inventoryType);
    
    UFUNCTION(BlueprintCallable)
    void SetPowerAttackJoystickThumbImage(bool pressed);
    
    UFUNCTION(BlueprintCallable)
    void SetPowerAttackJoystickPosition(UPARAM(Ref) FVector2D& position);
    
public:
    UFUNCTION()
    void RespondToVirtualJoystickPressChanged(int32 controlIndex, bool pressed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSecondAbilityButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnSecondAbilityButtonLongPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnPowerButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnPowerButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnAttackButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnAttackButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnActionButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnActionButtonPressed();
    
    UFUNCTION(BlueprintPure)
    bool IsPowerButtonAvailable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCancelPowerButtonAvailable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAttackButtonVisible() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializePowerAttackJoystickPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnAttackButtonReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnAttackButtonPressed();
    
private:
    UFUNCTION(BlueprintPure)
    UInteractionDefinition* GetCurrentPowerUseInteraction() const;
    
};

