#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "SpecialEventLoadingScreen.generated.h"

UCLASS()
class USpecialEventLoadingScreen : public UScreenBase {
    GENERATED_BODY()
public:
    UFUNCTION()
    void OnLoadingTextTimerComplete() const;
    
    USpecialEventLoadingScreen();
};

