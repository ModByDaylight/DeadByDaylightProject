#pragma once
#include "CoreMinimal.h"
#include "UmgPlayerHud.h"
#include "UmgSpectatorHud.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUmgSpectatorHudOnLeaveSpectateClicked);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUmgSpectatorHudOnPlayerSpectate, const FString&, playerName);

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUmgSpectatorHud : public UUmgPlayerHud {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUmgSpectatorHudOnLeaveSpectateClicked OnLeaveSpectateClicked;
    
    UPROPERTY(BlueprintAssignable)
    FUmgSpectatorHudOnPlayerSpectate OnPlayerSpectate;
    
private:
    UFUNCTION()
    void OnPlayerStatusSelected(const FString& playerName);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleLeaveSpectateClicked();
    
    UUmgSpectatorHud();
};

