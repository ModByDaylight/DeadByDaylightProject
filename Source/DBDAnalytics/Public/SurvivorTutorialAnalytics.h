#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "SurvivorTutorialAnalytics.generated.h"

USTRUCT()
struct FSurvivorTutorialAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SecondsSpentInTutorial;
    
    UPROPERTY()
    int32 SecondsSpentInIntroSection;
    
    UPROPERTY()
    int32 SecondsSpentInSkillchecksSection;
    
    UPROPERTY()
    int32 SecondsSpentInKillerSection;
    
    UPROPERTY()
    int32 SecondsSpentInStealthSection;
    
    UPROPERTY()
    int32 SecondsSpentInHookSection;
    
    UPROPERTY()
    int32 SecondsSpentInHealthSection;
    
    UPROPERTY()
    int32 SecondsSpentInRescueSection;
    
    UPROPERTY()
    int32 SecondsSpentInEscapeSection;
    
    UPROPERTY()
    bool WasScratchMarksAndWildlifeEventTriggered;
    
    UPROPERTY()
    bool WasRushedActionEventTriggered;
    
    UPROPERTY()
    bool WasSuccessfulStealthEventTriggered;
    
    UPROPERTY()
    bool WasStealthObjectiveCompleted;
    
    UPROPERTY()
    bool WasHatchEscapeObjectiveCompleted;
    
    DBDANALYTICS_API FSurvivorTutorialAnalytics();
};

