#pragma once
#include "CoreMinimal.h"
#include "StatModifier.h"
#include "BaseStat.generated.h"

USTRUCT()
struct STATSYSTEM_API FBaseStat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FStatModifier> _statModifiers;
    
public:
    FBaseStat();
};

