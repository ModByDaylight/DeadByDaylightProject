#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "ArchiveWidgetScreen.generated.h"

UCLASS()
class UArchiveWidgetScreen : public UScreenBase {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnRewardsButtonClick();
    
    UFUNCTION()
    void OnQuestsButtonClick();
    
public:
    UArchiveWidgetScreen();
};

