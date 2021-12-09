#pragma once
#include "CoreMinimal.h"
#include "OnboardingTutorialButtonViewData.h"
#include "PendingTutorialData.generated.h"

USTRUCT(BlueprintType)
struct FPendingTutorialData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 buttonIndex;
    
    UPROPERTY(Transient)
    FOnboardingTutorialButtonViewData buttonViewData;
    
    DBDUIVIEWSCORE_API FPendingTutorialData();
};

