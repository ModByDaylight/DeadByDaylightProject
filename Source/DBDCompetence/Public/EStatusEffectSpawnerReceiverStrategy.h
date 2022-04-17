#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectSpawnerReceiverStrategy.generated.h"

UENUM()
enum class EStatusEffectSpawnerReceiverStrategy : int32 {
    AllCharacter,
    PawnType,
    OriginatingPlayer,
};

