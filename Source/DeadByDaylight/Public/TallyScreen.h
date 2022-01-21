#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "TallyScreen.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UTallyScreen : public UScreenBase {
    GENERATED_BODY()
public:
    UTallyScreen();
protected:
    UFUNCTION()
    void OnSpectateButtonClick();
    
    UFUNCTION()
    void OnShowSlasherInfos();
    
    UFUNCTION()
    void OnReportPlayerButtonClick(const FString& playerId);
    
    UFUNCTION()
    void OnRateMatch(int32 rateValue);
    
    UFUNCTION()
    void OnPlayerOptionClick(const FString& krakenId, const FString& playerId, uint8 option);
    
    UFUNCTION()
    void OnPlayerInfoClick(const FString& playerId);
    
    UFUNCTION()
    void OnLevelingSequenceComplete();
    
    UFUNCTION()
    void OnLeaveButtonClick();
    
    UFUNCTION()
    void OnCustomerSupportButtonClick();
    
    UFUNCTION()
    void OnBloodwebButtonClick();
    
};

