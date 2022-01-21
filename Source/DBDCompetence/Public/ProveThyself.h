#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "DBDTunableRowHandle.h"
#include "ProveThyself.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UProveThyself : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _proveThyselfRange;
    
public:
    UProveThyself();
private:
    UFUNCTION()
    void OnSurvivorInOwnerRangeChanged(const bool inRange);
    
};

