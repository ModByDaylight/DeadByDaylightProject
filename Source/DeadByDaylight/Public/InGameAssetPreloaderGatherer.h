#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InGameAssetPreloaderGatherer.generated.h"

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UInGameAssetPreloaderGatherer : public UObject {
    GENERATED_BODY()
public:
    UInGameAssetPreloaderGatherer();
};

