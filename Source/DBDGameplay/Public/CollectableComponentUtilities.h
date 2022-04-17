#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CollectableComponentUtilities.generated.h"

class UActorComponent;
class ADBDPlayer;

UCLASS(BlueprintType)
class DBDGAMEPLAY_API UCollectableComponentUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCollectableComponentUtilities();
    UFUNCTION(BlueprintPure)
    static ADBDPlayer* GetCollector(const UActorComponent* component);
    
};

