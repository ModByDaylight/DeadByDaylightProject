#pragma once
#include "CoreMinimal.h"
#include "BaseIndicatorWidget.h"
#include "ExitOpenedIndicatorWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UExitOpenedIndicatorWidget : public UBaseIndicatorWidget {
    GENERATED_BODY()
public:
    UExitOpenedIndicatorWidget();
};

