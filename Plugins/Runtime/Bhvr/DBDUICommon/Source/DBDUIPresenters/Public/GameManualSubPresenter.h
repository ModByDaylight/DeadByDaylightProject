#pragma once
#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "EHelpType.h"
#include "GameManualSubPresenter.generated.h"

class UGameManualViewInterface;
class IGameManualViewInterface;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDUIPRESENTERS_API UGameManualSubPresenter : public USubPresenter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TScriptInterface<IGameManualViewInterface> _gameManualWidget;
    
public:
    UGameManualSubPresenter();
private:
    UFUNCTION()
    void OnCategoryCategoryEntered(EHelpType categoryType);
    
};

