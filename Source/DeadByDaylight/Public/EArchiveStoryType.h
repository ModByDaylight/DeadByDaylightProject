#pragma once
#include "CoreMinimal.h"
#include "EArchiveStoryType.generated.h"

UENUM()
enum class EArchiveStoryType {
    NotSet,
    CurrentStory,
    PastStory,
    EventStory,
};

