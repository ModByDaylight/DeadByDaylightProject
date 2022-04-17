#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectSpawnerReceiverStrategy.h"
#include "EPawnType.h"
#include "StatusEffectSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FStatusEffectSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString EffectId;
    
    UPROPERTY(EditDefaultsOnly)
    float CustomParam;
    
    UPROPERTY(EditDefaultsOnly)
    EStatusEffectSpawnerReceiverStrategy ReceiverStrategy;
    
    UPROPERTY(EditDefaultsOnly)
    EPawnType PawnType;
    
    UPROPERTY(EditDefaultsOnly)
    bool SkipOriginatingPlayer;
    
    DBDCOMPETENCE_API FStatusEffectSpawnData();
};

