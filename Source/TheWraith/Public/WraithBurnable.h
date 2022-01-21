#pragma once
#include "CoreMinimal.h"
#include "PlayerLightBurnable.h"
#include "DBDTunableRowHandle.h"
#include "WraithBurnable.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEWRAITH_API UWraithBurnable : public UPlayerLightBurnable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _flashlightEvasionScoreCooldown;
    
public:
    UWraithBurnable();
};

