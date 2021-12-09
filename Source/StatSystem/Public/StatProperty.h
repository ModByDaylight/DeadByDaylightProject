#pragma once
#include "CoreMinimal.h"
#include "BaseStat.h"
#include "DBDTunableRowHandle.h"
#include "StatProperty.generated.h"

USTRUCT(BlueprintType)
struct STATSYSTEM_API FStatProperty : public FBaseStat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool _useTunable;
    
    UPROPERTY(EditDefaultsOnly)
    float _nonTunableValue;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _tunableValue;
    
public:
    FStatProperty();
};

