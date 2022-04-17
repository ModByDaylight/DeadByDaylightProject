#pragma once
#include "CoreMinimal.h"
#include "BaseTooltipData.h"
#include "PlayerRoleRankData.h"
#include "EPlayerRole.h"
#include "RankTooltipData.generated.h"

USTRUCT()
struct FRankTooltipData : public FBaseTooltipData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    EPlayerRole CurrentPlayerRole;
    
    UPROPERTY(Transient)
    FPlayerRoleRankData SurvivorRankData;
    
    UPROPERTY(Transient)
    FPlayerRoleRankData KillerRankData;
    
    DEADBYDAYLIGHT_API FRankTooltipData();
};

