#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Presenter.h"
#include "SubtitlesPresenter.generated.h"

class UUserWidget;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDUIPRESENTERS_API USubtitlesPresenter : public UPresenter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> SubtitlesWidgetClass;
    
    USubtitlesPresenter();
};

