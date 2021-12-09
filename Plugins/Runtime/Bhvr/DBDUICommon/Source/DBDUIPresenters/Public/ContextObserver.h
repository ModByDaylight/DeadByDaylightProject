#pragma once
#include "CoreMinimal.h"
#include "UIComponent.h"
#include "EContextSection.h"
#include "ContextObserver.generated.h"

UCLASS()
class DBDUIPRESENTERS_API UContextObserver : public UUIComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EContextSection ObservedContextSection;
    
public:
    UContextObserver();
};

