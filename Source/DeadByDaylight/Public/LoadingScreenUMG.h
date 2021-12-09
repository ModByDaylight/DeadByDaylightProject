#pragma once
#include "CoreMinimal.h"
#include "LoadingScreen.h"
#include "LoadingScreenUMG.generated.h"

class UUMGLoadingScreenWidget;

UCLASS()
class ULoadingScreenUMG : public ULoadingScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UUMGLoadingScreenWidget* _loadingScreen;
    
public:
    ULoadingScreenUMG();
};

