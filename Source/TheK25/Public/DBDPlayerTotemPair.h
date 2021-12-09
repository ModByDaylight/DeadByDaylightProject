#pragma once
#include "CoreMinimal.h"
#include "DBDPlayerTotemPair.generated.h"

class ADBDPlayer;
class ATotem;

USTRUCT(BlueprintType)
struct FDBDPlayerTotemPair {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ADBDPlayer* Player;
    
    UPROPERTY(Transient)
    ATotem* Totem;
    
    THEK25_API FDBDPlayerTotemPair();
};

