#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ControlModeManager.generated.h"

class UGameInstance;

UCLASS()
class DBDINPUT_API UControlModeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGameInstance* _gameInstance;
    
public:
    UControlModeManager();
};

