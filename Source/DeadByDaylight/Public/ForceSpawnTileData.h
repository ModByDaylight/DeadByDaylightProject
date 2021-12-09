#pragma once
#include "CoreMinimal.h"
#include "ForceSpawnTileData.generated.h"

USTRUCT(BlueprintType)
struct FForceSpawnTileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 matrixX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 matrixY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 rotation;
    
    DEADBYDAYLIGHT_API FForceSpawnTileData();
};

