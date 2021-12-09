#pragma once
#include "CoreMinimal.h"
#include "SaveDataBase.generated.h"

USTRUCT()
struct FSaveDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(NoClear, SaveGame)
    int32 VersionNumber;
    
    DEADBYDAYLIGHT_API FSaveDataBase();
};

