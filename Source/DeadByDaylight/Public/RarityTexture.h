#pragma once
#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "UObject/NoExportTypes.h"
#include "RarityTexture.generated.h"

USTRUCT(BlueprintType)
struct FRarityTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EItemRarity Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath Texture;
    
    DEADBYDAYLIGHT_API FRarityTexture();
};

