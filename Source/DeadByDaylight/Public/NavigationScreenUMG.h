#pragma once
#include "CoreMinimal.h"
#include "NavigationScreen.h"
#include "NavigationScreenUMG.generated.h"

class UUMGLobbyScreen;

UCLASS()
class UNavigationScreenUMG : public UNavigationScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UUMGLobbyScreen* _atlNavigationScreen;
    
public:
    UNavigationScreenUMG();
};

