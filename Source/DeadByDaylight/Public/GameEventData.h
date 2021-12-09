#pragma once
#include "CoreMinimal.h"
#include "GameEventData.generated.h"

class ADBDPlayer;
class AActor;
class UObject;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FGameEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    ADBDPlayer* Instigator;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float CustomValue;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UObject* CustomObjectParameter;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 CustomIntValue;
    
    FGameEventData();
};

