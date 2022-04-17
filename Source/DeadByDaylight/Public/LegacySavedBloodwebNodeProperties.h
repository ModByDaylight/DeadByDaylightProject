#pragma once
#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "EBloodwebNodeContentType.h"
#include "LegacySavedBloodwebNodeProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacySavedBloodwebNodeProperties {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    EBloodwebNodeContentType ContentType;
    
    UPROPERTY(SaveGame)
    EItemRarity Rarity;
    
    UPROPERTY(SaveGame)
    TArray<FString> Tags;
    
    DEADBYDAYLIGHT_API FLegacySavedBloodwebNodeProperties();
};

