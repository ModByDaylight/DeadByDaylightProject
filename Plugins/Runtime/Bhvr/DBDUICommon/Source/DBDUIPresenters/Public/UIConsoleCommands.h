#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIConsoleCommands.generated.h"

UCLASS()
class UUIConsoleCommands : public UObject {
    GENERATED_BODY()
public:
    UUIConsoleCommands();
    UFUNCTION(Exec)
    void DBD_ToggleTestWidget();
    
    UFUNCTION(Exec)
    void DBD_ToggleDPICurve();
    
    UFUNCTION(Exec)
    void DBD_SetMenuScaleFactor(float scaleFactor);
    
    UFUNCTION(Exec)
    void DBD_SetHudVisible(bool isVisible);
    
    UFUNCTION(Exec)
    void DBD_SetHudScaleFactor(float scaleFactor);
    
    UFUNCTION(Exec)
    void DBD_SetApplicationScale(float applicationScale);
    
};

