#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DBDBaseInputHandler.generated.h"

class APawn;
class USpringArmComponent;

UCLASS()
class UDBDBaseInputHandler : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    APawn* _pawn;
    
    UPROPERTY(Export, Transient)
    USpringArmComponent* _cameraBoom;
    
public:
    UDBDBaseInputHandler();
};

