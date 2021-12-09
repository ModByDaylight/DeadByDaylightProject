#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "StreamVideoScreenUMG.generated.h"

UCLASS()
class UStreamVideoScreenUMG : public UScreenBase {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnCloseTriggered();
    
public:
    UStreamVideoScreenUMG();
};

