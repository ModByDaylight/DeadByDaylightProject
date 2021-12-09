#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIController.generated.h"

class UGFxObject;
class UMobileBaseUserWidget;

UCLASS()
class DEADBYDAYLIGHT_API UUIController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_UIControllerObj;
    
    UPROPERTY(Export, Transient)
    UMobileBaseUserWidget* _atlantaLoadingWidget;
    
public:
    UUIController();
};

