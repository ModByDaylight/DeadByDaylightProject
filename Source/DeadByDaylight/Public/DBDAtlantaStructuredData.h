#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DBDAtlantaStructuredData.generated.h"

class AAtlantaHeartbeatActor;

UCLASS(Transient, Config=Design)
class DEADBYDAYLIGHT_API UDBDAtlantaStructuredData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<AAtlantaHeartbeatActor> AtlantaHeartbeatActor;
    
    UDBDAtlantaStructuredData();
};

