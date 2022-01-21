#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Presenter.h"
#include "TestPresenter.generated.h"

class UUserWidget;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDUIPRESENTERS_API UTestPresenter : public UPresenter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> TestWidgetClass;
    
    UTestPresenter();
};

