#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ExplorableTileInfo.generated.h"

USTRUCT()
struct FExplorableTileInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid Id;
    
    UPROPERTY()
    FBox Bounds;
    
    DBDBOTS_API FExplorableTileInfo();
};

