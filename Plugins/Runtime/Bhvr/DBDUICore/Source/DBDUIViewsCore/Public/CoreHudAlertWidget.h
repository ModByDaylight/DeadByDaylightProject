#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CoreBaseHudWidget.h"
#include "EEasingType.h"
#include "HudAlertViewInterface.h"
#include "CoreHudAlertWidget.generated.h"

class UCoreBaseUserWidget;
class UCoreHudScoreAlertItem;
class UCoreHudStatusEffectAlertItem;
class UGridPanel;
class UUITweenInstance;

UCLASS(EditInlineNew)
class UCoreHudAlertWidget : public UCoreBaseHudWidget, public IHudAlertViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxDisplayedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SecondaryAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FullAlertDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PendingAlertDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEasingType AnimationEasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimationTranslationY;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSubclassOf<UCoreHudScoreAlertItem> CoreHudScoreAlertItemClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSubclassOf<UCoreHudStatusEffectAlertItem> CoreHudStatusEffectAlertItemClass;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UGridPanel* AlertContainer;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCoreBaseUserWidget*> _alerts;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCoreBaseUserWidget*> _pendingAlerts;
    
    UPROPERTY(Export, Transient)
    TArray<UCoreHudScoreAlertItem*> _scoreAlertPool;
    
    UPROPERTY(Export, Transient)
    TArray<UCoreHudStatusEffectAlertItem*> _statusEffectAlertPool;
    
public:
    UCoreHudAlertWidget();
private:
    UFUNCTION()
    void PopAlert();
    
    UFUNCTION()
    void OnPopAlertComplete(UUITweenInstance* tween);
    
    UFUNCTION()
    void OnClearAlertsComplete(UUITweenInstance* tween);
    
protected:
    UFUNCTION(BlueprintPure)
    float GetRemainingTime() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UCoreBaseUserWidget*> GetPendingAlerts() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UCoreBaseUserWidget*> GetAlerts() const;
    
private:
    UFUNCTION()
    void ClearAlerts();
    
    
    // Fix for true pure virtual functions not being implemented
};

