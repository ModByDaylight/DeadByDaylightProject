#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGEndGameCollapseWidget.generated.h"

class UUMGEndGameCollapseProgressWidget;
class UCanvasPanel;

UCLASS(EditInlineNew)
class UUMGEndGameCollapseWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _progressBarInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    bool _slowMode;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* NormalBar;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SlowBar;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGEndGameCollapseProgressWidget* NormalProgressBar;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGEndGameCollapseProgressWidget* SlowProgressBar;
    
private:
    UPROPERTY(Export, Transient)
    UUMGEndGameCollapseProgressWidget* _topBar;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PlayToZeroAnimation();
    
public:
    UUMGEndGameCollapseWidget();
};

