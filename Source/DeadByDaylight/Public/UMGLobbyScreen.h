#pragma once
#include "CoreMinimal.h"
#include "OnSearchingLobbyCancelled.h"
#include "MobileBaseUserWidget.h"
#include "OnJoinedLobbyLeaved.h"
#include "UMGLobbyScreen.generated.h"

class UUMGLobbyJoinedWidget;
class UUMGLobbySearchingWidget;
class UWidgetSwitcher;
class UUMGLobbyOfferingWidget;
class UUMGFogWidget;

UCLASS(EditInlineNew)
class UUMGLobbyScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLobbySearchingWidget* LobbySearchingWidget;
    
    UPROPERTY(BlueprintAssignable)
    FOnJoinedLobbyLeaved OnJoinedLobbyLeaved;
    
    UPROPERTY(BlueprintAssignable)
    FOnSearchingLobbyCancelled OnSearchingLobbyCancelled;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetSwitcher* LobbySwitcher;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLobbyJoinedWidget* LobbyJoinedWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLobbyOfferingWidget* OfferingWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGFogWidget* FogWidget;
    
public:
    UUMGLobbyScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSearchingLobbyCancel();
    
    UFUNCTION(BlueprintCallable)
    void HandleJoinedLobbyLeave();
    
};

