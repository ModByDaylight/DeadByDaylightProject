#pragma once
#include "CoreMinimal.h"
#include "UmgPlayableHud.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "UmgSurvivorHud.generated.h"

class UCanvasPanel;
class UActionButton;
class UAtlantaHudLookBackJoystick;
class UWiggleWidget;
class ACamperPlayer;
class UTexture2D;

UCLASS(Abstract, EditInlineNew)
class UUmgSurvivorHud : public UUmgPlayableHud {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UActionButton* CrouchButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* CrouchButtonContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UWiggleWidget* StruggleWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* StruggleWidgetContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UWiggleWidget* WiggleWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* WiggleWidgetContainer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ACamperPlayer* Survivor;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UActionButton* CancelButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* CenterInteractionButtonContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* LookBackButtonContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UAtlantaHudLookBackJoystick* LookBackJoystick;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UActionButton* SkillCheckButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SkillCheckButtonCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* InsaneSkillCheckButtonCanvas;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush _unpressedLookBackJoystickThumbImage;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush _pressedLookBackJoystickThumbImage;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush _unpressedLookBackJoystickBackgroundImage;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush _pressedLookBackJoystickBackgroundImage;
    
public:
    UUmgSurvivorHud();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateCancelButton();
    
    UFUNCTION(BlueprintPure)
    bool ShouldUseContextualItemButton() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSkillCheckButtonPosition(bool isInsane);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetNonRestrictedControlsVisibility(bool visible);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetLookBackJoystickPosition(UPARAM(Ref) FVector2D& position);
    
    UFUNCTION(BlueprintCallable)
    void SetLookBackJoystickImage(bool pressed);
    
public:
    UFUNCTION()
    void RespondToVirtualJoystickPressChanged(int32 controlIndex, bool pressed);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCancelButtonClicked();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeLookBackJoystickPosition();
    
private:
    UFUNCTION(BlueprintPure)
    bool HasSecondaryActionAvailable() const;
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetLookBackJoystickNormalizedOffset();
    
    UFUNCTION(BlueprintCallable)
    bool GetLookBackJoystickIsPressed();
    
    UFUNCTION(BlueprintPure)
    FText GetCenterItemText() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetCenterItemIcon() const;
    
    UFUNCTION(BlueprintCallable)
    void CenterItemClicked(bool fromCancelRequest);
    
};

