#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDiceRollType.h"
#include "DBDDiceRoller.generated.h"

class AActor;
class ADBDPlayer;
class UInteractionDefinition;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDDiceRoller : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDDiceRoller();
    UFUNCTION(BlueprintCallable)
    static bool GetRollResultByTunableValue(const AActor* RollingActor, FName TunableValueName, float MultiplicativeModifier, float AdditiveModifier);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRollResultByDiceRollType(const ADBDPlayer* RollingPlayer, EDiceRollType DiceRollType);
    
    UFUNCTION(BlueprintCallable)
    static float GetInteractionRollSuccessPercentageByDiceRollType(const UInteractionDefinition* interaction, const ADBDPlayer* RollingPlayer, EDiceRollType DiceRollType);
    
    UFUNCTION(BlueprintCallable)
    static bool CalculateTickedRollResult(const AActor* RollingActor, float BaseProbability, float ticks, float MultiplicativeModifier, float AdditiveModifier);
    
    UFUNCTION(BlueprintCallable)
    static bool CalculateRollResult(const AActor* RollingActor, float BaseProbability, float MultiplicativeModifier, float AdditiveModifier);
    
    UFUNCTION(BlueprintCallable)
    static bool CalculateOverTimeRollResult(const AActor* RollingActor, float BaseProbability, float DeltaTime, float ExpectedTime, float MultiplicativeModifier, float AdditiveModifier);
    
};

