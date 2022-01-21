#pragma once
#include "CoreMinimal.h"
#include "RewardWrapperViewData.h"
#include "EOnboardingTutorialType.h"
#include "EOnboardingTutorialButtonStyle.h"
#include "OnboardingTutorialViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FOnboardingTutorialViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FString TutorialId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool Completed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool MainRewardClaimed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TArray<FRewardWrapperViewData> MainRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TArray<FRewardWrapperViewData> AlternativeRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    EOnboardingTutorialType TutorialType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EOnboardingTutorialButtonStyle ButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    UTexture2D* Icon;
    
    FOnboardingTutorialViewData();
};

