#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HudPresenter.h"
#include "TemplatePresenter.generated.h"

class UUserWidget;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDUIPRESENTERS_API UTemplatePresenter : public UHudPresenter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> TemplateWidgetClass;
    
    UTemplatePresenter();
};

