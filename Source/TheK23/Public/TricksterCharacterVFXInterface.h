#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TricksterCharacterVFXInterface.generated.h"

UINTERFACE(Blueprintable)
class UTricksterCharacterVFXInterface : public UInterface {
    GENERATED_BODY()
};

class ITricksterCharacterVFXInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void ShowWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void SetSuperModeActive(bool active);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void SetKnivesVisibility(bool leftKnife, bool rightKnife);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void SetIsSuperModeReady(bool isSuperModeReady);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void SetIsInCooldown(bool isInCooldown);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void HideWeapon();
    
};

