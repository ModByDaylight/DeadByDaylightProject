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
    
public:
    USplashScreenUMG();
protected:
    UFUNCTION()
    void TriggerAnyKey();
    
};

