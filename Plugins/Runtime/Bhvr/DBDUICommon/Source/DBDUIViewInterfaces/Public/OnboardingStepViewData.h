#pragma once
#include "CoreMinimal.h"
#include "EOnboardingStepStatus.h"
#include "OnboardingTutorialViewData.h"
#include "OnboardingStepViewData.generated.h"

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FOnboardingStepViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FString StepId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    EOnboardingStepStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TArray<FOnboardingTutorialViewData> Tutorials;
    
    FOnboardingStepViewData();
};

