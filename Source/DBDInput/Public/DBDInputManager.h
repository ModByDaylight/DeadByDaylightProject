#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DBDInputManager.generated.h"

class UControlModeManager;
class USwitchDockStateManager;
class UVirtualKeyboardManager;
class UDataTable;

UCLASS()
class DBDINPUT_API UDBDInputManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UControlModeManager* _controlModeManager;
    
    UPROPERTY(Transient)
    USwitchDockStateManager* _switchDockStateManager;
    
    UPROPERTY(Transient)
    UVirtualKeyboardManager* _virtualKeyboardManager;
    
    UPROPERTY(Transient)
    UDataTable* _analogCursorDb;
    
public:
    UDBDInputManager();
};

