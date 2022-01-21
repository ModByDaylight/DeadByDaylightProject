#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "DBDBaseHud.generated.h"

class UFont;

UCLASS(NonTransient)
class ADBDBaseHud : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UFont* _debugFont;
    
public:
    ADBDBaseHud();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ShowAnimHudBP();
    
    UFUNCTION(BlueprintPure)
    bool ShouldDrawAnimHud() const;
    
    UFUNCTION(Exec)
    void DBD_ShowAnimHud(bool show);
    
};

