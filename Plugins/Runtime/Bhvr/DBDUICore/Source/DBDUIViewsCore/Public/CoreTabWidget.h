#pragma once
#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "CoreTabWidget.generated.h"

class UDBDTextBlock;
class UDBDImage;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreTabWidget : public UCoreSelectableButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UDBDTextBlock* TabTextField;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UDBDImage* TabImage;
    
public:
    UCoreTabWidget();
    UFUNCTION(BlueprintPure)
    int32 GetKey() const;
    
};

