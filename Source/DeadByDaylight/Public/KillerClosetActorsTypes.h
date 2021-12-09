#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "KillerClosetActorsTypes.generated.h"

class AActor;

USTRUCT()
struct FKillerClosetActorsTypes : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> ClosetActorClass;
    
    DEADBYDAYLIGHT_API FKillerClosetActorsTypes();
};

