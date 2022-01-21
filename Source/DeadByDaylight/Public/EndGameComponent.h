#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "EndGameComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEndGameComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEndGameComponent();
    UFUNCTION(BlueprintCallable)
    void UnpauseEndGameTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartEndGame_Cheat();
    
    UFUNCTION(BlueprintCallable)
    void PauseEndGameTimer();
    
    UFUNCTION(BlueprintPure)
    bool GetHasEndGameBegun() const;
    
private:
    UFUNCTION()
    void FireEndGameSacrificeScoreEvent(const FGameEventData gameEventData);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisableEndGameScenario();
    
};

