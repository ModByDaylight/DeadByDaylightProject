#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlagueUtilities.generated.h"

class ADBDPlayer;
class USurvivorPlagueEffect;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UPlagueUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlagueUtilities();
    UFUNCTION(BlueprintPure)
    static bool IsPlagueDebugModeActive();
    
    UFUNCTION(BlueprintPure)
    static bool IsInfected(const ADBDPlayer* player);
    
    UFUNCTION(BlueprintPure)
    static bool HasMaxLevelSickness(const ADBDPlayer* player);
    
    UFUNCTION(BlueprintPure)
    static USurvivorPlagueEffect* GetPlagueEffect(const ADBDPlayer* player);
    
    UFUNCTION(BlueprintCallable)
    static void Authority_AddSicknessToPlayer(ADBDPlayer* player, float sicknessToAdd);
    
};

