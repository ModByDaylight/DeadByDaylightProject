#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ExperimentalFeaturesManager.generated.h"

UCLASS()
class EXPERIMENTALFEATURES_API UExperimentalFeaturesManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UExperimentalFeaturesManager();
};

