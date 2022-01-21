#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "CreditsScreen.generated.h"

UCLASS()
class UCreditsScreen : public UScreenBase {
    GENERATED_BODY()
public:
    UCreditsScreen();
    UFUNCTION()
    void SetCreditsHtml(const FString& creditsHtml) const;
    
    UFUNCTION()
    void ScrollCreditsScreen(float scrollAmount) const;
    
};

