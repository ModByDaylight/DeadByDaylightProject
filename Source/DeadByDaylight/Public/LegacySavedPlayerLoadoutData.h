#pragma once
#include "CoreMinimal.h"
#include "LegacySavedPlayerLoadoutData.generated.h"

USTRUCT(BlueprintType)
struct FLegacySavedPlayerLoadoutData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FName Item;
    
    UPROPERTY(SaveGame)
    TArray<FName> ItemAddOns;
    
    UPROPERTY(SaveGame)
    TArray<FName> CamperPerks;
    
    UPROPERTY(SaveGame)
    TArray<int32> CamperPerkLevels;
    
    UPROPERTY(SaveGame)
    FName CamperFavor;
    
    UPROPERTY(SaveGame)
    FName Power;
    
    UPROPERTY(SaveGame)
    TArray<FName> PowerAddOns;
    
    UPROPERTY(SaveGame)
    TArray<FName> SlasherPerks;
    
    UPROPERTY(SaveGame)
    TArray<int32> SlasherPerkLevels;
    
    UPROPERTY(SaveGame)
    FName SlasherFavor;
    
    DEADBYDAYLIGHT_API FLegacySavedPlayerLoadoutData();
};

