#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "NewSurvivorTutorialAnalytics.generated.h"

USTRUCT()
struct FNewSurvivorTutorialAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool IsLookAroundComplete;
    
    UPROPERTY()
    bool IsWalkAroundComplete;
    
    UPROPERTY()
    bool IsRunningComplete;
    
    UPROPERTY()
    bool IsCrouchComplete;
    
    UPROPERTY()
    bool IsFirstVaultComplete;
    
    UPROPERTY()
    int32 TimeToCompleteAreaOne;
    
    UPROPERTY()
    bool IsGeneratorComplete;
    
    UPROPERTY()
    bool IsSecondVaultComplete;
    
    UPROPERTY()
    int32 TimeToCompleteAreaTwo;
    
    UPROPERTY()
    bool IsBeartrapComplete;
    
    UPROPERTY()
    int32 TimeToCompleteAreaThree;
    
    UPROPERTY()
    bool IsPalletComplete;
    
    UPROPERTY()
    bool IsUnhookMegComplete;
    
    UPROPERTY()
    bool IsLockerComplete;
    
    UPROPERTY()
    bool IsGetUnhookedComplete;
    
    UPROPERTY()
    bool IsHealMegComplete;
    
    UPROPERTY()
    bool IsGetHealedComplete;
    
    UPROPERTY()
    bool IsOpenGateComplete;
    
    UPROPERTY()
    bool IsEscapeComplete;
    
    UPROPERTY()
    int32 TimeToCompleteAreaFour;
    
    UPROPERTY()
    int32 TotalTimeInTutorial;
    
    UPROPERTY()
    FString TutorialId;
    
    DBDANALYTICS_API FNewSurvivorTutorialAnalytics();
};

