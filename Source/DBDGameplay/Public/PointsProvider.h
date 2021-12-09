#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PointsProvider.generated.h"

UCLASS(Abstract, EditInlineNew)
class DBDGAMEPLAY_API UPointsProvider : public UObject {
    GENERATED_BODY()
public:
    UPointsProvider();
};

