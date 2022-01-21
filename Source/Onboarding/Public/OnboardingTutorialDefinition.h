#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "EOnboardingTutorialType.h"
#include "EOnboardingTutorialButtonStyle.h"
#include "OnboardingTutorialDefinition.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FOnboardingTutorialDefinition : public FDBDTableRowBaseWithId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CompletedDisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CompletedDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOnboardingTutorialType TutorialType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOnboardingTutorialButtonStyle ButtonStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LevelId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    ONBOARDING_API FOnboardingTutorialDefinition();
};

