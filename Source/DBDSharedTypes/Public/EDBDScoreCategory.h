#pragma once
#include "CoreMinimal.h"
#include "EDBDScoreCategory.generated.h"

UENUM(BlueprintType)
enum class EDBDScoreCategory : uint8 {
    DBD_CamperScoreCat_Objectives,
    DBD_CamperScoreCat_Survival,
    DBD_CamperScoreCat_Altruism,
    DBD_CamperScoreCat_Boldness,
    DBD_SlasherScoreCat_Brutality,
    DBD_SlasherScoreCat_Deviousness,
    DBD_SlasherScoreCat_Hunter,
    DBD_SlasherScoreCat_Sacrifice,
    DBD_CamperScoreCat_Untracked,
    DBD_CamperScoreCat_Streak,
    DBD_ScoreCat_SpecialEvents,
    DBD_ScoreCat_Bonus,
    Count,
};

