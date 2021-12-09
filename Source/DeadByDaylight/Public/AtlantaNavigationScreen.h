#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "AtlantaNavigationScreen.generated.h"

class UUMGAtlantaNavigationScreen;

UCLASS()
class DEADBYDAYLIGHT_API UAtlantaNavigationScreen : public UScreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UUMGAtlantaNavigationScreen* _umgScreen;
    
public:
    UAtlantaNavigationScreen();
};

