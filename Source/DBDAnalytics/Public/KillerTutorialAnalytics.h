#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "KillerTutorialAnalytics.generated.h"

USTRUCT()
struct FKillerTutorialAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SecondsSpentInTutorial;
    
    UPROPERTY()
    int32 SecondsSpentInIntroSection;
    
    UPROPERTY()
    int32 SecondsSpentInChaseSection;
    
    UPROPERTY()
    int32 SecondsSpentInEscapeSection;
    
    UPROPERTY()
    bool WasLungeAttackObjectiveCompleted;
    
    DBDANALYTICS_API FKillerTutorialAnalytics();
};

