#pragma once
#include "CoreMinimal.h"
#include "PlayerLoadoutData.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FPlayerLoadoutData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Item;
    
    UPROPERTY()
    TArray<FName> ItemAddOns;
    
    UPROPERTY()
    TArray<FName> CamperPerks;
    
    UPROPERTY()
    TArray<int32> CamperPerkLevels;
    
    UPROPERTY()
    FName CamperFavor;
    
    UPROPERTY()
    FName Power;
    
    UPROPERTY()
    TArray<FName> PowerAddOns;
    
    UPROPERTY()
    TArray<FName> SlasherPerks;
    
    UPROPERTY()
    TArray<int32> SlasherPerkLevels;
    
    UPROPERTY()
    FName SlasherFavor;
    
    FPlayerLoadoutData();
};

