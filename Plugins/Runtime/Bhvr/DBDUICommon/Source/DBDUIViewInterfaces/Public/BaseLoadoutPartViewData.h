#pragma once
#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "BaseLoadoutPartViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FBaseLoadoutPartViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TSoftObjectPtr<UTexture2D> IconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EItemRarity Rarity;
    
    DBDUIVIEWINTERFACES_API FBaseLoadoutPartViewData();
};

