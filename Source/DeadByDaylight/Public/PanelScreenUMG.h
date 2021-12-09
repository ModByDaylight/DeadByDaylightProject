#pragma once
#include "CoreMinimal.h"
#include "PanelScreen.h"
#include "PanelScreenUMG.generated.h"

class UUMGSwitcherScreen;

UCLASS()
class UPanelScreenUMG : public UPanelScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UUMGSwitcherScreen* _atlantaPanelScreen;
    
public:
    UPanelScreenUMG();
};

