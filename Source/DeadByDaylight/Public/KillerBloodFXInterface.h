#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "KillerBloodFXInterface.generated.h"

UINTERFACE(Blueprintable)
class UKillerBloodFXInterface : public UInterface {
    GENERATED_BODY()
};

class IKillerBloodFXInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void StopBloodSplatter();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayBloodSplatter();
    
};

