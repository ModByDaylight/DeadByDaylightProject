#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "AtlantaRoleSelectionScreen.generated.h"

class UUMGRoleSelectionScreen;

UCLASS()
class UAtlantaRoleSelectionScreen : public UScreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UUMGRoleSelectionScreen* _umgScreen;
    
public:
    UAtlantaRoleSelectionScreen();
};

