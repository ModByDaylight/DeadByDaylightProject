#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "BaseProjectileLauncher.h"
#include "K25ProjectileLauncher.generated.h"

class AK25ControlledProjectile;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25ProjectileLauncher : public UBaseProjectileLauncher {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _controlledProjectileInitialSpeed;
    
private:
    UPROPERTY(Transient)
    bool _isControlledProjectileRequested;
    
    UPROPERTY(Transient)
    AK25ControlledProjectile* _controlledProjectile;
    
public:
    UK25ProjectileLauncher();
};

