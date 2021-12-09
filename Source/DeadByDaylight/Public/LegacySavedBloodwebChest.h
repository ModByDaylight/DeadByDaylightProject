#pragma once
#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "LegacySavedBloodwebChest.generated.h"

USTRUCT(BlueprintType)
struct FLegacySavedBloodwebChest {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FName ID;
    
    UPROPERTY(SaveGame)
    FName EventID;
    
    UPROPERTY(SaveGame)
    EItemRarity Rarity;
    
    UPROPERTY(SaveGame)
    TArray<float> GivenItemRarity;
    
    DEADBYDAYLIGHT_API FLegacySavedBloodwebChest();
};

