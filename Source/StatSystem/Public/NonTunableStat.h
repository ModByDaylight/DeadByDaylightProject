#pragma once
#include "CoreMinimal.h"
#include "BaseStat.h"
#include "NonTunableStat.generated.h"

USTRUCT(BlueprintType)
struct STATSYSTEM_API FNonTunableStat : public FBaseStat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _baseValue;
    
public:
    FNonTunableStat();
};

