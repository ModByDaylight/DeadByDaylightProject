#pragma once
#include "CoreMinimal.h"
#include "PossessPlayer.h"
#include "PossessTheConjoinedTwin.generated.h"

class AConjoinedTwin;
class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UPossessTheConjoinedTwin : public UPossessPlayer {
    GENERATED_BODY()
public:
    UPossessTheConjoinedTwin();
private:
    UFUNCTION()
    void OnTwinSet(AConjoinedTwin* twin);
    
    UFUNCTION()
    void OnPowerCollected(ADBDPlayer* collector);
    
};

