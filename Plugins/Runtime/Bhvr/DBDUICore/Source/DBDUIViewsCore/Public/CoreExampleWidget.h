#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "ExampleViewInterface.h"
#include "CoreExampleWidget.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCoreExampleWidgetExampleButtonClickDelegate);

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreExampleWidget : public UCoreBaseHudWidget, public IExampleViewInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString EditAnywhere;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString EditDefaultsOnly;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FString EditInstanceOnly;
    
    UPROPERTY(EditAnywhere)
    FString EditNoBlueprint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString EditDefaultsOnlyBlueprintReadOnly;
    
    UPROPERTY(VisibleAnywhere)
    FString VisibleAnywhere;
    
    UPROPERTY(VisibleDefaultsOnly)
    FString VisibleDefaultsOnly;
    
    UPROPERTY(VisibleInstanceOnly)
    FString VisibleInstanceOnly;
    
private:
    UPROPERTY(BlueprintCallable)
    FCoreExampleWidgetExampleButtonClickDelegate ExampleButtonClickDelegate;
    
public:
    UCoreExampleWidget();
};

