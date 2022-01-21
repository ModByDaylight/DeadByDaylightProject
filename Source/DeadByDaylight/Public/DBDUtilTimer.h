#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDTimer.h"
#include "DBDUtilTimer.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDUtilTimer : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDUtilTimer();
    UFUNCTION(BlueprintCallable)
    static void Update(UPARAM(Ref) FDBDTimer& Timer, float deltaTime);
    
    UFUNCTION(BlueprintCallable)
    static void Stop(UPARAM(Ref) FDBDTimer& Timer);
    
    UFUNCTION(BlueprintCallable)
    static void ResetTo(UPARAM(Ref) FDBDTimer& Timer, float time);
    
    UFUNCTION(BlueprintCallable)
    static void Reset(UPARAM(Ref) FDBDTimer& Timer);
    
    UFUNCTION(BlueprintPure)
    static bool IsDone(const FDBDTimer& Timer);
    
    UFUNCTION(BlueprintPure)
    static float GetTimeLeft(const FDBDTimer& Timer);
    
    UFUNCTION(BlueprintPure)
    static float GetTimeElapsed(const FDBDTimer& Timer);
    
    UFUNCTION(BlueprintPure)
    static float GetStartTime(const FDBDTimer& Timer);
    
    UFUNCTION(BlueprintPure)
    static float GetPercentTimeLeft(const FDBDTimer& Timer);
    
    UFUNCTION(BlueprintPure)
    static float GetPercentTimeElapsed(const FDBDTimer& Timer);
    
};

