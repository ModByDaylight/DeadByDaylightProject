#pragma once
#include "CoreMinimal.h"
#include "SplashScreen.h"
#include "SplashScreenUMG.generated.h"

class UUMGSplashScreen;

UCLASS()
class USplashScreenUMG : public USplashScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UUMGSplashScreen* _splashScreen;
    
    UFUNCTION()
    void TriggerAnyKey();
    
public:
    USplashScreenUMG();
};

