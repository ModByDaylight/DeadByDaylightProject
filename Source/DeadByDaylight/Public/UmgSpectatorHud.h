#pragma once
#include "CoreMinimal.h"
#include "OnSpectatePlayerDelegate.h"
#include "UmgPlayerHud.h"
#include "OnLeaveSpectateClickedDelegate.h"
#include "UmgSpectatorHud.generated.h"

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUmgSpectatorHud : public UUmgPlayerHud {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnLeaveSpectateClicked OnLeaveSpectateClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnSpectatePlayer OnPlayerSpectate;
    
    UUmgSpectatorHud();
private:
    UFUNCTION()
    void OnPlayerStatusSelected(const FString& playerName);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleLeaveSpectateClicked();
    
};

