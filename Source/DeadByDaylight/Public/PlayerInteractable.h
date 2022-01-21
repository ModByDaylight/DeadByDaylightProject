#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "PlayerInteractable.generated.h"

class ADBDPlayer;

UCLASS()
class DEADBYDAYLIGHT_API APlayerInteractable : public AInteractable {
    GENERATED_BODY()
public:
    APlayerInteractable();
protected:
    UFUNCTION(BlueprintNativeEvent)
    void InitInteractable(ADBDPlayer* player);
    
};

