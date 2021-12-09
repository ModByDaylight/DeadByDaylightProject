#pragma once
#include "CoreMinimal.h"
#include "GhostStatusData.generated.h"

USTRUCT(BlueprintType)
struct FGhostStatusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsExposed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StalkingProgress;
    
    DBDUIVIEWINTERFACES_API FGhostStatusData();
};

