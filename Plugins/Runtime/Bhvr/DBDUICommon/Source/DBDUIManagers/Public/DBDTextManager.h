#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DBDTextManager.generated.h"

UCLASS(BlueprintType)
class DBDUIMANAGERS_API UDBDTextManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UDBDTextManager();
    UFUNCTION(BlueprintPure)
    bool GetLargeTextEnabled() const;
    
};

