#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAlertsWidget.generated.h"

class UUMGScoreAlertWidget;
class UUMGGameplayAlertWidget;
class UCanvasPanel;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAlertsWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGScoreAlertWidget> AtlantaScoreAlertComponentClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGGameplayAlertWidget> AtlantaStatusEffectAlertComponentClass;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* CanvasPanelAlerts;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float IdleTime;
    
private:
    UPROPERTY(Transient)
    UClass* _scoreAlertClass;
    
    UPROPERTY(Transient)
    UClass* _statusEffectAlertClass;
    
public:
    UUMGAlertsWidget();
};

