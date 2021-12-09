#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "DBDTunableRowHandle.h"
#include "ProveThyself.generated.h"

UCLASS()
class UProveThyself : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _proveThyselfRange;
    
    UFUNCTION()
    void OnSurvivorInOwnerRangeChanged(const bool inRange);
    
public:
    UProveThyself();
};

