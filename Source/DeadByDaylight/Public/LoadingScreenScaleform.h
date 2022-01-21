#pragma once
#include "CoreMinimal.h"
#include "LoadingScreen.h"
#include "LoadingScreenScaleform.generated.h"

UCLASS()
class ULoadingScreenScaleform : public ULoadingScreen {
    GENERATED_BODY()
public:
    ULoadingScreenScaleform();
    UFUNCTION()
    void OnLoadingTextTimerComplete() const;
    
};

