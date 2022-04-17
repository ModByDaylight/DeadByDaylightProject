#pragma once
#include "CoreMinimal.h"
#include "EContextSection.h"
#include "UIComponent.h"
#include "ContextObserver.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDUIPRESENTERS_API UContextObserver : public UUIComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EContextSection ObservedContextSection;
    
public:
    UContextObserver();
};

