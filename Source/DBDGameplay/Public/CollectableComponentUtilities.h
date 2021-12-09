#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CollectableComponentUtilities.generated.h"

class ADBDPlayer;
class UActorComponent;

UCLASS(BlueprintType)
class DBDGAMEPLAY_API UCollectableComponentUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static ADBDPlayer* GetCollector(const UActorComponent* component);
    
    UCollectableComponentUtilities();
};

