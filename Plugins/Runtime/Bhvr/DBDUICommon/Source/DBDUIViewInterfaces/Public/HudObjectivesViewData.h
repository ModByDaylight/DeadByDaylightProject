#pragma once
#include "CoreMinimal.h"
#include "EPlayerTeam.h"
#include "HudObjectivesViewData.generated.h"

USTRUCT(BlueprintType)
struct FHudObjectivesViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlayerTeam playerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isHatchOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 nbGeneratorsLeft;
    
    DBDUIVIEWINTERFACES_API FHudObjectivesViewData();
};

