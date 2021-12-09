#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ClientLoginAnalytics.generated.h"

USTRUCT()
struct FClientLoginAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ClientOptions;
    
    UPROPERTY()
    FString ClientMatchId;
    
    UPROPERTY()
    FString ClientGameType;
    
    UPROPERTY()
    FString ClientRole;
    
    UPROPERTY()
    FString ClientSurvivorIndex;
    
    UPROPERTY()
    FString ClientKillerIndex;
    
    UPROPERTY()
    FString ClientPlatformAccountId;
    
    UPROPERTY()
    FString ClientMirrorsId;
    
    UPROPERTY()
    FString ClientPlatform;
    
    UPROPERTY()
    FString ClientProvider;
    
    UPROPERTY()
    FString ClientName;
    
    UPROPERTY()
    FString LoginResult;
    
    DBDANALYTICS_API FClientLoginAnalytics();
};

