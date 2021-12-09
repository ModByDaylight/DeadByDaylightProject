#pragma once
#include "CoreMinimal.h"
#include "EPlayerTeam.h"
#include "HudObjectiveViewData.generated.h"

USTRUCT(BlueprintType)
struct FHudObjectiveViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlayerTeam playerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isHatchOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 nbGeneratorsLeft;
    
    DBDUIVIEWINTERFACES_API FHudObjectiveViewData();
};

