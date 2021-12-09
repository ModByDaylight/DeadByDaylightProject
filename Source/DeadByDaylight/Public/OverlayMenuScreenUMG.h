#pragma once
#include "CoreMinimal.h"
#include "OverlayMenuScreen.h"
#include "OverlayMenuScreenUMG.generated.h"

class UUMGAtlantaSettingScreen;

UCLASS()
class UOverlayMenuScreenUMG : public UOverlayMenuScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UUMGAtlantaSettingScreen* _atlOverlayMenuScreen;
    
public:
    UOverlayMenuScreenUMG();
};

