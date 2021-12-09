#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDBDScoreTypes.h"
#include "GameEventTracker.generated.h"

class ADBDPlayerState;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGameEventTrackerOnGameplayEvent, EDBDScoreTypes, playerGameplayEventType, float, amount, AActor*, effector, AActor*, target);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGameEventTrackerOnGameflowEvent, EDBDScoreTypes, playerGameplayEventType, float, amount, const ADBDPlayerState*, effector);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UGameEventTracker : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGameEventTrackerOnGameplayEvent OnGameplayEvent;
    
    UPROPERTY(BlueprintAssignable)
    FGameEventTrackerOnGameflowEvent OnGameflowEvent;
    
    UFUNCTION(BlueprintCallable)
    void FireGameflowEvent(EDBDScoreTypes eventType, float amount, const ADBDPlayerState* instigator, FName data);
    
    UFUNCTION(BlueprintCallable)
    void FireGameEvent(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target);
    
    UGameEventTracker();
};

