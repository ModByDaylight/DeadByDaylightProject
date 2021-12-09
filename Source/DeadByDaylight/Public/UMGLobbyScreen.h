#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGLobbyScreen.generated.h"

class UUMGLobbyJoinedWidget;
class UUMGLobbySearchingWidget;
class UWidgetSwitcher;
class UUMGLobbyOfferingWidget;
class UUMGFogWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUMGLobbyScreenOnJoinedLobbyLeaved);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUMGLobbyScreenOnSearchingLobbyCancelled);

UCLASS(EditInlineNew)
class UUMGLobbyScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLobbySearchingWidget* LobbySearchingWidget;
    
    UPROPERTY(BlueprintAssignable)
    FUMGLobbyScreenOnJoinedLobbyLeaved OnJoinedLobbyLeaved;
    
    UPROPERTY(BlueprintAssignable)
    FUMGLobbyScreenOnSearchingLobbyCancelled OnSearchingLobbyCancelled;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetSwitcher* LobbySwitcher;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLobbyJoinedWidget* LobbyJoinedWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLobbyOfferingWidget* OfferingWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGFogWidget* FogWidget;
    
    UFUNCTION(BlueprintCallable)
    void HandleSearchingLobbyCancel();
    
    UFUNCTION(BlueprintCallable)
    void HandleJoinedLobbyLeave();
    
public:
    UUMGLobbyScreen();
};

