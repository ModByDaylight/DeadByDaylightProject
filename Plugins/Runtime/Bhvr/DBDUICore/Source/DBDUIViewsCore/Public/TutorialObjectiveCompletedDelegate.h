#pragma once
#include "CoreMinimal.h"
#include "TutorialObjectiveCompletedDelegate.generated.h"

class UCoreTutorialObjectiveItem;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialObjectiveCompleted, UCoreTutorialObjectiveItem*, item);

