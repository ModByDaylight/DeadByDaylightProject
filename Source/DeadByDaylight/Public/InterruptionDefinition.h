#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AnimationMontageDescriptor.h"
#include "UObject/NoExportTypes.h"
#include "InterruptionDefinition.generated.h"

class UInteractionDefinition;
class ADBDPlayer;
class AInteractable;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UInterruptionDefinition : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName InterruptionID;
    
private:
    UPROPERTY(EditAnywhere)
    bool _usesWorldCoordinates;
    
    UPROPERTY(EditAnywhere)
    bool _snapInterruptor;
    
    UPROPERTY(EditAnywhere)
    FTransform _interruptionSnapPointForInterruptor;
    
    UPROPERTY(EditAnywhere)
    FAnimationMontageDescriptor _animationMontageToPlayOnInterruptionEnterForInterruptor;
    
    UPROPERTY(EditAnywhere)
    FAnimationMontageDescriptor _animationMontageToPlayOnInterruptionForInterruptorNew;
    
    UPROPERTY(EditAnywhere)
    FAnimationMontageDescriptor _animationMontageToPlayOnInterruptionForInterrupteeNew;
    
    UPROPERTY(EditAnywhere)
    bool _pickUpOnInterrupt;
    
    UPROPERTY(EditAnywhere)
    bool _canInterruptWhileCarrying;
    
    UPROPERTY(EditAnywhere)
    bool _useMontageFollower;
    
    UPROPERTY(EditAnywhere)
    float _maxHeightDeltaBetweenCharacters;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag _interruptionScoreEvent;
    
public:
    UInterruptionDefinition();
    UFUNCTION(BlueprintCallable)
    void SetInterruptorSnapPoint(const FTransform& Point);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInterruptionUpdateStart(ADBDPlayer* interruptor, ADBDPlayer* interruptee);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInterruptionExitEnd(ADBDPlayer* interruptor, ADBDPlayer* interruptee);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInterruptionEnterStart(ADBDPlayer* interruptor, ADBDPlayer* interruptee);
    
    UFUNCTION(BlueprintPure)
    bool IsUsingMontageFollower() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUsingAttack() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsInterruptionPossible(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee) const;
    
    UFUNCTION(BlueprintPure)
    bool InteractionCheckHeightDelta(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FRotator GetInterruptionSnapPointRotationForInterruptor(const ADBDPlayer* Interruptor, const ADBDPlayer* Interruptee) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector GetInterruptionSnapPointPositionForInterruptor(const ADBDPlayer* Interruptor, const ADBDPlayer* Interruptee) const;
    
    UFUNCTION(BlueprintPure)
    UInteractionDefinition* GetInteractionDefinition() const;
    
    UFUNCTION(BlueprintPure)
    AInteractable* GetInteractable() const;
    
    UFUNCTION(BlueprintPure)
    bool CanInterruptWhileCarrying() const;
    
};

