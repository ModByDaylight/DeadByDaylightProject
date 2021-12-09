#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "HookAnalytics.generated.h"

USTRUCT()
struct FHookAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    float HookStartTime;
    
    UPROPERTY()
    FString MirrorsIdSurvivor;
    
    UPROPERTY()
    uint8 SurvivorIsABot;
    
    UPROPERTY()
    FString MirrorsIdKiller;
    
    UPROPERTY()
    uint8 KillerIsABot;
    
    UPROPERTY()
    FString MirrorsIdRescuer;
    
    UPROPERTY()
    uint8 RescuerIsABot;
    
    UPROPERTY()
    int32 TimesOnHook;
    
    UPROPERTY()
    FString Outcome;
    
    UPROPERTY()
    float HookDuration;
    
    UPROPERTY()
    int32 EscapeAttemptStart;
    
    UPROPERTY()
    int32 EscapeAttemptFull;
    
    UPROPERTY()
    int32 SurvivorsRemaining;
    
    UPROPERTY()
    int32 NumberOfActiveSurvivorsStart;
    
    UPROPERTY()
    int32 NumberOfActiveSurvivorsEnd;
    
    UPROPERTY()
    int32 NumberOfActiveSurvivorsTotal;
    
    UPROPERTY()
    float DurationCampFace;
    
    UPROPERTY()
    float DurationCampHard;
    
    UPROPERTY()
    float DurationCampSoft;
    
    UPROPERTY()
    int32 NumberOfRescuers;
    
    UPROPERTY()
    float TimeForFirstRescuer;
    
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    bool ReverseBearTrapOn;
    
    DBDANALYTICS_API FHookAnalytics();
};

