#pragma once
#include "CoreMinimal.h"
#include "BaseTwinInspectLocker.h"
#include "TwinInspectEmptyLocker.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTwinInspectEmptyLocker : public UBaseTwinInspectLocker {
    GENERATED_BODY()
public:
    UTwinInspectEmptyLocker();
};

