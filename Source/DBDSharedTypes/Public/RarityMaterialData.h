#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EItemRarity.h"
#include "RarityMaterialData.generated.h"

class UMaterialInterface;

USTRUCT()
struct FRarityMaterialData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EItemRarity Rarity;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    DBDSHAREDTYPES_API FRarityMaterialData();
};

