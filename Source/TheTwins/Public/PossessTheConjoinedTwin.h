#pragma once
#include "CoreMinimal.h"
#include "PossessPlayer.h"
#include "PossessTheConjoinedTwin.generated.h"

class AConjoinedTwin;
class ADBDPlayer;

UCLASS(EditInlineNew)
class UPossessTheConjoinedTwin : public UPossessPlayer {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnTwinSet(AConjoinedTwin* twin);
    
    UFUNCTION()
    void OnPowerCollected(ADBDPlayer* collector);
    
public:
    UPossessTheConjoinedTwin();
};

