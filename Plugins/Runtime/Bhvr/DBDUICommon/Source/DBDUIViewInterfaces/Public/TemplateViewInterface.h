#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TemplateViewData.h"
#include "TemplateViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UTemplateViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ITemplateViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TemplateExampleFunction(const FTemplateViewData& templateData);
    
};

