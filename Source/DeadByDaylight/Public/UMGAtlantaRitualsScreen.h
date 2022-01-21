#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaRitualsScreen.generated.h"

class UUMGAtlantaRitualTab;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaRitualsScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGAtlantaRitualTab* DailyTab;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGAtlantaRitualTab* WeeklyTab;
    
    UPROPERTY(BlueprintReadOnly)
    FText _atlantaRitualTitle;
    
    UPROPERTY(BlueprintReadOnly)
    FText _endInLabel;
    
    UPROPERTY(BlueprintReadOnly)
    FText _dailyButtonLabel;
    
    UPROPERTY(BlueprintReadOnly)
    FText _weeklyButtonLabel;
    
    UPROPERTY(BlueprintReadOnly)
    FText _dailyRemainingTime;
    
    UPROPERTY(BlueprintReadOnly)
    FText _weeklyRemainingTime;
    
public:
    UUMGAtlantaRitualsScreen();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetNewRitualNumbers(int32 newDailyRitualNumber, int32 newWeeklyRitualNumber);
    
private:
    UFUNCTION()
    void BroadcastOnClaimRewardButtonPressed(const int32 ritualId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastOnBackButtonPressed();
    
};

