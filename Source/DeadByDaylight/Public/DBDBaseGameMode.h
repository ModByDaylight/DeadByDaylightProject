#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "DataTableDropdown.h"
#include "DBDBaseGameMode.generated.h"

UCLASS(NonTransient)
class ADBDBaseGameMode : public AGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDataTableDropdown DebugSpecialEvent;
    
public:
    ADBDBaseGameMode();
};

