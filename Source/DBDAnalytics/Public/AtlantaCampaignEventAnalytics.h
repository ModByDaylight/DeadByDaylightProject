#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "AtlantaCampaignEventAnalytics.generated.h"

USTRUCT()
struct FAtlantaCampaignEventAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString EventName;
    
    UPROPERTY()
    FString EffectType;
    
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    float BaseGained;
    
    UPROPERTY()
    float BonusGained;
    
    UPROPERTY()
    FString AffectedRole;
    
    UPROPERTY()
    FString CharacterName;
    
    DBDANALYTICS_API FAtlantaCampaignEventAnalytics();
};

