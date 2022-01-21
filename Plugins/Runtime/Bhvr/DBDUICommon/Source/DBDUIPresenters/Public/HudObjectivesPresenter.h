#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HudPresenter.h"
#include "HudObjectivesPresenter.generated.h"

class UUserWidget;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UHudObjectivesPresenter : public UHudPresenter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> CoreHudObjectivesWidgetClass;
    
    UHudObjectivesPresenter();
};

