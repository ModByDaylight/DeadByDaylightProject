#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHudComponent.h"
#include "AtlantaTutorialPlayerHudController.generated.h"

UCLASS(BlueprintType)
class UAtlantaTutorialPlayerHudController : public UObject {
    GENERATED_BODY()
public:
    UAtlantaTutorialPlayerHudController();
    UFUNCTION(BlueprintCallable)
    void ShowHudComponent(EHudComponent hudComponentToShow);
    
    UFUNCTION(BlueprintCallable)
    void SetVirtualJoystickInputEnabled(bool enable);
    
    UFUNCTION(BlueprintCallable)
    void HideHudComponent(EHudComponent hudComponentToHide);
    
};

