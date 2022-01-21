#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "TestBuildFlagViewInterface.h"
#include "CoreTestBuildFlagWidget.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreTestBuildFlagWidget : public UCoreBaseHudWidget, public ITestBuildFlagViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* TopLineTextfield;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* BottomLineTextfield;
    
public:
    UCoreTestBuildFlagWidget();
    
    // Fix for true pure virtual functions not being implemented
};

