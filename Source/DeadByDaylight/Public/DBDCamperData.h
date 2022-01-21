#pragma once
#include "CoreMinimal.h"
#include "DBDPlayerData.h"
#include "DBDCamperData.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDCamperData : public UDBDPlayerData {
    GENERATED_BODY()
public:
    UDBDCamperData();
};

