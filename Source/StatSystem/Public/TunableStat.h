#pragma once
#include "CoreMinimal.h"
#include "BaseStat.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.generated.h"

USTRUCT(BlueprintType)
struct STATSYSTEM_API FTunableStat : public FBaseStat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _baseValue;
    
public:
    FTunableStat();
};

