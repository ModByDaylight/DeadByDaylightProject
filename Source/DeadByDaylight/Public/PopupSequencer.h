#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PopupSequencer.generated.h"

class UDBDGameInstance;

UCLASS()
class UPopupSequencer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UDBDGameInstance* _gameInstance;
    
public:
    UPopupSequencer();
};

