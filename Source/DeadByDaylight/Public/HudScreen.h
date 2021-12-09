#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "HudScreen.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UHudScreen : public UScreenBase {
    GENERATED_BODY()
public:
    UFUNCTION()
    void OnTutorialNotificationClosedByUserInput();
    
    UFUNCTION()
    void OnSpectatePlayerClick(const FString& name);
    
    UFUNCTION()
    void OnSettingsClicked();
    
    UFUNCTION()
    void OnQuitGameButtonClick();
    
    UFUNCTION()
    void OnPreviousButtonClick();
    
    UFUNCTION()
    void OnPerkClicked(FName perkID, bool clickedOnPerkWidget);
    
    UFUNCTION()
    void OnNextButtonClick();
    
    UFUNCTION()
    void OnLeaveButtonClick();
    
    UFUNCTION()
    void OnCancelQuitGameButtonClick();
    
    UHudScreen();
};

