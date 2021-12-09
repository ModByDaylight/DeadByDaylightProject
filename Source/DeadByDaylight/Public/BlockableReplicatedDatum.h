#pragma once
#include "CoreMinimal.h"
#include "BlockableReplicatedDatum.generated.h"

class UObject;
class ADBDPlayer;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FBlockableReplicatedDatum {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<UObject>> Sources;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ADBDPlayer>> BlockedPlayers;
    
    FBlockableReplicatedDatum();
};

