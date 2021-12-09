#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "LockerFakeEnterInteraction.generated.h"

class ALocker;

UCLASS(EditInlineNew)
class DBDINTERACTION_API ULockerFakeEnterInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _lockerInteractionBlockTime;
    
private:
    UPROPERTY(Transient)
    ALocker* _owningLocker;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _fakeEnterLoudNoiseRange;
    
public:
    ULockerFakeEnterInteraction();
};

