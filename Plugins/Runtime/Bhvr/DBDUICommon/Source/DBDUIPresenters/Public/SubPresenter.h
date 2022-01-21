#pragma once
#include "CoreMinimal.h"
#include "UIComponent.h"
#include "SubPresenter.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDUIPRESENTERS_API USubPresenter : public UUIComponent {
    GENERATED_BODY()
public:
    USubPresenter();
};

