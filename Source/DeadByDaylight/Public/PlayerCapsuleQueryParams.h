#pragma once
#include "CoreMinimal.h"
#include "PlayerCapsuleQueryParams.generated.h"

class ADBDPlayer;
class AActor;

USTRUCT()
struct FPlayerCapsuleQueryParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    ADBDPlayer* Player;
    
    UPROPERTY()
    TSet<AActor*> IgnoreActors;
    
    DEADBYDAYLIGHT_API FPlayerCapsuleQueryParams();
};

