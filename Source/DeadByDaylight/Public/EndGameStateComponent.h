#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EEndGameScenarioTrigger.h"
#include "EndGameStateComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEndGameStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_IsEndGameOver)
    bool _isEndGameOver;
    
    UPROPERTY(ReplicatedUsing=OnRep_WorldTimeAtLastDilationModification)
    float _worldTimeAtLastModification;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TimeDilation)
    float _timeDilation;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsTimerPaused)
    bool _isTimerPaused;
    
    UPROPERTY(Replicated, Transient)
    float _normalTotalTimeElapsedAtLastTimeModification;
    
    UPROPERTY(Replicated, Transient)
    EEndGameScenarioTrigger _endGameScenarioTrigger;
    
public:
    UEndGameStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_WorldTimeAtLastDilationModification();
    
    UFUNCTION()
    void OnRep_TimeDilation();
    
    UFUNCTION()
    void OnRep_IsTimerPaused();
    
    UFUNCTION()
    void OnRep_IsEndGameOver();
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetIsInEndGameSimulation(bool endGameSimulation);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTimerSlowedDown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEndGameOver() const;
    
    UFUNCTION(BlueprintPure)
    bool HasEndGameBegun() const;
    
    UFUNCTION(BlueprintPure)
    float GetElapsedTimePercent() const;
    
};

