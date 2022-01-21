#pragma once
#include "CoreMinimal.h"
#include "UMGTallyListElementWidget.h"
#include "UMGTallyEmblemsWidget.generated.h"

class UUMGTallyEmblemWidget;
class UHorizontalBox;

UCLASS(EditInlineNew)
class UUMGTallyEmblemsWidget : public UUMGTallyListElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGTallyEmblemWidget> EmblemWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* EmblemsContainer;
    
private:
    UPROPERTY(Export, Transient)
    TArray<UUMGTallyEmblemWidget*> _emblems;
    
public:
    UUMGTallyEmblemsWidget();
    UFUNCTION(BlueprintPure)
    TArray<UUMGTallyEmblemWidget*> GetEmblems() const;
    
};

