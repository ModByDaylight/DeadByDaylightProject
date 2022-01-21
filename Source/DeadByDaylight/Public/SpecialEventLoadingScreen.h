#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "SpecialEventLoadingScreen.generated.h"

UCLASS()
class USpecialEventLoadingScreen : public UScreenBase {
    GENERATED_BODY()
public:
    USpecialEventLoadingScreen();
    UFUNCTION()
    void OnLoadingTextTimerComplete() const;
    
};

