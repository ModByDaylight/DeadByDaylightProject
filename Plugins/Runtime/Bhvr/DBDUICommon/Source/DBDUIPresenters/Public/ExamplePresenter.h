#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HudPresenter.h"
#include "ExamplePresenter.generated.h"

class UUserWidget;

UCLASS(BlueprintType)
class DBDUIPRESENTERS_API UExamplePresenter : public UHudPresenter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> ExampleWidgetClass;
    
private:
    UFUNCTION()
    void OnButtonClick();
    
public:
    UExamplePresenter();
};

