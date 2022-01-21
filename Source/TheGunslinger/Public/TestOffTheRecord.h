#pragma once
#include "CoreMinimal.h"
#include "OffTheRecord.h"
#include "TestOffTheRecord.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTestOffTheRecord : public UOffTheRecord {
    GENERATED_BODY()
public:
    UTestOffTheRecord();
};

