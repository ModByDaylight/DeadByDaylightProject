#pragma once
#include "CoreMinimal.h"
#include "InteractionProgressViewData.h"
#include "HudScreen.h"
#include "PowerBundleViewData.h"
#include "ItemBundleViewData.h"
#include "PlayerStatusViewData.h"
#include "HudScreenCoreUMG.generated.h"

class UCoreHudRootWidget;
class ATutorialsUtilities;
class UPlayerStatusViewInterface;
class IPlayerStatusViewInterface;

UCLASS()
class DEADBYDAYLIGHT_API UHudScreenCoreUMG : public UHudScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UCoreHudRootWidget* _rootWidget;
    
    UPROPERTY(Transient)
    ATutorialsUtilities* _tutorialsUtilities;
    
    UPROPERTY(Transient)
    TArray<TScriptInterface<IPlayerStatusViewInterface>> _playerStatusInterfaces;
    
    UPROPERTY(Transient)
    FInteractionProgressViewData _interactionProgressViewData;
    
    UPROPERTY(Transient)
    FItemBundleViewData _itemBundleViewData;
    
    UPROPERTY(Transient)
    FPowerBundleViewData _powerBundleViewData;
    
    UPROPERTY(Transient)
    TArray<FPlayerStatusViewData> _playerStatusViewData;
    
public:
    UHudScreenCoreUMG();
private:
    UFUNCTION()
    void OnTutorialHudFadeOutTriggered();
    
    UFUNCTION()
    void OnTutorialHudFadeInTriggered();
    
    UFUNCTION()
    void OnSpectateRightArrowClicked();
    
    UFUNCTION()
    void OnSpectateLeftArrowClicked();
    
    UFUNCTION()
    void OnSpectateLeaveButtonClicked();
    
    UFUNCTION()
    void OnNotifTutoConfirmButtonClicked();
    
    UFUNCTION()
    void OnHUDWidgetFadeOutCompleted();
    
    UFUNCTION()
    void OnHideStartSequenceCompleted();
    
};

