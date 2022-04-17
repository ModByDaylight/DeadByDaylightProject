#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ScoreAlertViewData.h"
#include "StatusEffectAlertViewData.h"
#include "HudAlertViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UHudAlertViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IHudAlertViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowStatusEffectAlert(const FStatusEffectAlertViewData& data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowScoreAlert(const FScoreAlertViewData& data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetScoreEventsVisibility(bool visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadeOut(float delay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadeIn();
    
};

