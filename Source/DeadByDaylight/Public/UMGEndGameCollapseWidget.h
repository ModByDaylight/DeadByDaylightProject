#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGEndGameCollapseWidget.generated.h"

class UCanvasPanel;
class UUMGEndGameCollapseProgressWidget;

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
    
public:
    UUMGEndGameCollapseWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PlayToZeroAnimation();
    
};

