#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGBloodStoreSubMenu.generated.h"

class UUMGBloodStoreTimer;

UCLASS(Abstract, EditInlineNew)
class UUMGBloodStoreSubMenu : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBloodStoreTimer* SurvivorTimer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBloodStoreTimer* KillerTimer;
    
public:
    UUMGBloodStoreSubMenu();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetFaction(bool isKiller);
    
    UFUNCTION()
    void BroadcastExpiredBloodWeb();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastCharacterRoleButtonClicked();
    
};

