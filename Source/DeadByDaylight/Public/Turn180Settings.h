#pragma once
#include "CoreMinimal.h"
#include "Turn180Settings.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FTurn180Settings {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    uint8 _settings;
    
public:
    FTurn180Settings();
};

