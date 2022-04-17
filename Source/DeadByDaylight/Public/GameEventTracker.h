#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayEventDynamicDelegateDelegate.h"
#include "GameflowEventDynamicDelegateDelegate.h"
#include "EDBDScoreTypes.h"
#include "GameEventTracker.generated.h"

class ADBDPlayerState;
class AActor;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UGameEventTracker : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGameplayEventDynamicDelegate OnGameplayEvent;
    
    UPROPERTY(BlueprintAssignable)
    FGameflowEventDynamicDelegate OnGameflowEvent;
    
    UGameEventTracker();
    UFUNCTION(BlueprintCallable)
    void FireGameflowEvent(EDBDScoreTypes eventType, float amount, const ADBDPlayerState* instigator, FName data);
    
    UFUNCTION(BlueprintCallable)
    void FireGameEvent(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target);
    
};

