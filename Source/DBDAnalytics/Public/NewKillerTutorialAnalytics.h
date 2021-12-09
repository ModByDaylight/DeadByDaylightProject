#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "NewKillerTutorialAnalytics.generated.h"

USTRUCT()
struct FNewKillerTutorialAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool IsKickGeneratorComplete;
    
    UPROPERTY()
    bool IsFollowSurvivorComplete;
    
    UPROPERTY()
    int32 TimeToCompleteAreaOne;
    
    UPROPERTY()
    bool IsDestroyPalletComplete;
    
    UPROPERTY()
    int32 TimeToCompleteAreaTwo;
    
    UPROPERTY()
    bool IsBeartrapComplete;
    
    UPROPERTY()
    bool IsHitSurvivorComplete;
    
    UPROPERTY()
    bool IsKoSurvivorComplete;
    
    UPROPERTY()
    bool IsPickupSurvivorComplete;
    
    UPROPERTY()
    bool IsHookSurvivorComplete;
    
    UPROPERTY()
    bool IsCloseHatchComplete;
    
    UPROPERTY()
    bool IsKillSurvivorComplete;
    
    UPROPERTY()
    int32 TimeToCompleteAreaThree;
    
    UPROPERTY()
    int32 TotalTimeInTutorial;
    
    UPROPERTY()
    FString TutorialId;
    
    DBDANALYTICS_API FNewKillerTutorialAnalytics();
};

