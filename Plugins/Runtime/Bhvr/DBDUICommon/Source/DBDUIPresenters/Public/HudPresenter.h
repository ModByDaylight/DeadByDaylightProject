#pragma once
#include "CoreMinimal.h"
#include "Presenter.h"
#include "HudPresenter.generated.h"

class ADBDPlayer;
class ADBDSpectator;
class APawn;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDUIPRESENTERS_API UHudPresenter : public UPresenter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ADBDPlayer* _presentedCharacter;
    
    UPROPERTY(Transient)
    ADBDPlayer* _pendingCharacter;
    
    UPROPERTY(Transient)
    ADBDSpectator* _spectatorPawn;
    
public:
    UHudPresenter();
private:
    UFUNCTION()
    void OnPawnUnpossessed(APawn* pawn);
    
    UFUNCTION()
    void OnPawnPossessed(APawn* pawn);
    
};

