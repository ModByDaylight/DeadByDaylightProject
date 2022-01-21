#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIComponent.h"
#include "PresenterGroupHandler.generated.h"

class APresenterGroup;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDUIPRESENTERS_API UPresenterGroupHandler : public UUIComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APresenterGroup> PresenterGroupClass;
    
private:
    UPROPERTY(Transient)
    APresenterGroup* _presenterGroup;
    
public:
    UPresenterGroupHandler();
};

