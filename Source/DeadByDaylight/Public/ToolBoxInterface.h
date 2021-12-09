#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ToolBoxInterface.generated.h"

class UChargerComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UToolBoxInterface : public UInterface {
    GENERATED_BODY()
};

class IToolBoxInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UChargerComponent* GetChargerComponent();
    
};

