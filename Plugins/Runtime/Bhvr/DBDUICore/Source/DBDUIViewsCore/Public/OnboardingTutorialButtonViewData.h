#pragma once
#include "CoreMinimal.h"
#include "EOnboardingStepStatus.h"
#include "EOnboardingTutorialButtonStyle.h"
#include "RewardWrapperViewData.h"
#include "OnboardingTutorialButtonViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FOnboardingTutorialButtonViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EOnboardingStepStatus StepStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString StepId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString TutorialId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRewardWrapperViewData> RewardsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EOnboardingTutorialButtonStyle ButtonStyle;
    
    DBDUIVIEWSCORE_API FOnboardingTutorialButtonViewData();
};

