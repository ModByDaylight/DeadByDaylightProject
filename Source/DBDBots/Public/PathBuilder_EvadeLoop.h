#pragma once
#include "CoreMinimal.h"
#include "PathBuilder.h"
#include "PathBuilder_EvadeLoop.generated.h"

class UNavMovePath;
class UDBDNavEvadeLoopComponent;

UCLASS(EditInlineNew)
class DBDBOTS_API UPathBuilder_EvadeLoop : public UPathBuilder {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float AddDistanceToRequiredEvadeGap;
    
    UPROPERTY(EditDefaultsOnly)
    float ForceEvadePointUnderDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float ChaserCrossingEvadeTimePenalty;
    
    UPROPERTY(EditDefaultsOnly)
    float SwapPathReachTimeBuffer;
    
    UPROPERTY(EditDefaultsOnly)
    FString BreakPalletInteractionId;
    
    UPROPERTY(EditDefaultsOnly)
    float OnPathRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxEvadeInteractableWeightDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float WeightAtMaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    bool MaxWeightAtNearestDistanceIfHostileHasRangedAbility;
    
    UPROPERTY(EditDefaultsOnly)
    float WeightAtMaxSafety;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxNearAllyPenaltyPathPointDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float WeightWhenNearAlly;
    
private:
    UPROPERTY(Transient)
    UNavMovePath* _originalEvadeLoopWorkPath;
    
    UPROPERTY(Transient)
    UNavMovePath* _querierWorkPathA;
    
    UPROPERTY(Transient)
    UNavMovePath* _querierWorkPathB;
    
    UPROPERTY(Transient)
    UNavMovePath* _chaserWorkPath;
    
    UPROPERTY(Export, Transient)
    UDBDNavEvadeLoopComponent* _pickedEvadeLoopComponent;
    
public:
    UPathBuilder_EvadeLoop();
};

