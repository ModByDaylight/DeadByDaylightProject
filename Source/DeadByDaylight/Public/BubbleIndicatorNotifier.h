#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "BubbleIndicatorNotifier.generated.h"

class UStaticMesh;
class UObject;
class ABubbleIndicator;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UBubbleIndicatorNotifier : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBubbleIndicatorNotifier();
private:
    UFUNCTION(BlueprintCallable)
    static void SpawnBubbleIndicator(UObject* worldContextObject, TSubclassOf<ABubbleIndicator> bubbleIndicatorBP, FTransform transform, bool triggerLoudNoise, bool spawnOnKillerSideOnly, float lifetime, UStaticMesh* silhouetteStaticMesh, float audibleRange);
    
};

