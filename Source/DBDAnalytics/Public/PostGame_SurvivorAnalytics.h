#pragma once
#include "CoreMinimal.h"
#include "PostGameAnalyticsBase.h"
#include "ECamperDamageState.h"
#include "PostGame_SurvivorAnalytics.generated.h"

USTRUCT()
struct FPostGame_SurvivorAnalytics : public FPostGameAnalyticsBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Objectives;
    
    UPROPERTY()
    int32 Survival;
    
    UPROPERTY()
    int32 Altruism;
    
    UPROPERTY()
    int32 Boldness;
    
    UPROPERTY()
    FString Outcome;
    
    UPROPERTY()
    ECamperDamageState DamageState;
    
    UPROPERTY()
    int32 HookedCount;
    
    UPROPERTY()
    bool UsedController;
    
    UPROPERTY()
    bool UsedKeyboard;
    
    DBDANALYTICS_API FPostGame_SurvivorAnalytics();
};

