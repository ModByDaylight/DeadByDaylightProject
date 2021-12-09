#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AbstractGameFlowHandler.generated.h"

UCLASS(Abstract)
class DEADBYDAYLIGHT_API UAbstractGameFlowHandler : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UAbstractGameFlowHandler();
};

