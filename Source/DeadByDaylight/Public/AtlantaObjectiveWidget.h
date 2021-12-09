#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "AtlantaObjectiveWidget.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class UAtlantaObjectiveWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* ObjectiveLabel;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float _totalFadeOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _polynomialOrder;
    
public:
    UAtlantaObjectiveWidget();
};

