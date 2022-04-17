#pragma once
#include "CoreMinimal.h"
#include "TunableStat.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StatsSystemUtilities.generated.h"

class UModifierProvider;
class IModifierProvider;

UCLASS(BlueprintType)
class DBDCOMPETENCE_API UStatsSystemUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStatsSystemUtilities();
    UFUNCTION(BlueprintCallable)
    static void InitStatBP(UPARAM(Ref) FTunableStat& theStat, TScriptInterface<IModifierProvider> modifierProvider);
    
    UFUNCTION(BlueprintPure)
    static float GetStatValueBP(const FTunableStat& theStat);
    
};

