#pragma once
#include "CoreMinimal.h"
#include "TutorialObjectiveCompleted.generated.h"

class UCoreTutorialObjectiveItem;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialObjectiveCompleted, UCoreTutorialObjectiveItem*, item);

