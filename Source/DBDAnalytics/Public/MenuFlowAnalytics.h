#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MenuFlowAnalytics.generated.h"

USTRUCT()
struct FMenuFlowAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString CurrentContext;
    
    UPROPERTY()
    FString PreviousContext;
    
    UPROPERTY()
    float TimeOnPreviousContext;
    
    UPROPERTY()
    FString ContextChangeTimetamp;
    
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    FString LobbyId;
    
    DBDANALYTICS_API FMenuFlowAnalytics();
};

