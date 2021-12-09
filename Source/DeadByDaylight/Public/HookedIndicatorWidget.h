#pragma once
#include "CoreMinimal.h"
#include "BaseIndicatorWidget.h"
#include "HookedIndicatorWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UHookedIndicatorWidget : public UBaseIndicatorWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float HookedIndicatorDuration;
    
public:
    UHookedIndicatorWidget();
};

