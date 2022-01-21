#pragma once
#include "CoreMinimal.h"
#include "EDBDScoreTypes.h"
#include "GameplayTagContainer.h"
#include "RitualEvent.generated.h"

class ADBDPlayer;
class ADBDPlayerState;
class AActor;

USTRUCT(BlueprintType)
struct FRitualEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    EDBDScoreTypes ScoreType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FGameplayTag GameEventType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Amount;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ADBDPlayer* Instigator;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ADBDPlayerState* InstigatorPlayerState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* Target;
    
    DEADBYDAYLIGHT_API FRitualEvent();
};

