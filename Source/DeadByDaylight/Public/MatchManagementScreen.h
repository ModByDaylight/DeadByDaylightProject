#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "MatchManagementScreen.generated.h"

UCLASS()
class UMatchManagementScreen : public UScreenBase {
    GENERATED_BODY()
public:
    UMatchManagementScreen();
private:
    UFUNCTION()
    void OnRemoveMap(const FString& mapId);
    
    UFUNCTION()
    void OnPerksSettingsChange(int32 value);
    
    UFUNCTION()
    void OnOfferingsSettingsChange(int32 value);
    
    UFUNCTION()
    void OnItemsAndAddonsSettingsChange(int32 value);
    
    UFUNCTION()
    void OnBackButtonClick();
    
    UFUNCTION()
    void OnApplyChangesClicked();
    
    UFUNCTION()
    void OnAllowDlcSettingsClick();
    
    UFUNCTION()
    void OnAddMap(const FString& mapId);
    
};

