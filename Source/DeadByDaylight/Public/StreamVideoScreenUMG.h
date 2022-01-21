#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "StreamVideoScreenUMG.generated.h"

UCLASS()
class UStreamVideoScreenUMG : public UScreenBase {
    GENERATED_BODY()
public:
    UStreamVideoScreenUMG();
private:
    UFUNCTION()
    void OnCloseTriggered();
    
};

