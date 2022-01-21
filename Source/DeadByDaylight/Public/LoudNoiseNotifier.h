#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "LoudNoiseNotifier.generated.h"

class UObject;
class AActor;
class ADBDPlayer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API ULoudNoiseNotifier : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULoudNoiseNotifier();
    UFUNCTION(BlueprintCallable)
    static void Fire(const UObject* worldContextObject, AActor* instigator, const FVector& location, bool shouldTrack, float audibleRange, ADBDPlayer* instigatingPlayer, bool isQuickAction);
    
};

