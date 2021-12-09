#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PopupFactory.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UPopupFactory : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UDBDGameInstance* _gameInstance;
    
public:
    UPopupFactory();
};

