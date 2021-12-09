#pragma once
#include "CoreMinimal.h"
#include "EHelpType.h"
#include "SubPresenter.h"
#include "GameManualSubPresenter.generated.h"

class UGameManualViewInterface;
class IGameManualViewInterface;

UCLASS()
class DBDUIPRESENTERS_API UGameManualSubPresenter : public USubPresenter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TScriptInterface<IGameManualViewInterface> _gameManualWidget;
    
    UFUNCTION()
    void OnCategoryCategoryEntered(EHelpType categoryType);
    
public:
    UGameManualSubPresenter();
};

