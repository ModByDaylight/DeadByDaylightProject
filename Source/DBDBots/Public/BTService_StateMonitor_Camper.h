#pragma once
#include "CoreMinimal.h"
#include "BTService_StateMonitor.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_StateMonitor_Camper.generated.h"

UCLASS()
class DBDBOTS_API UBTService_StateMonitor_Camper : public UBTService_StateMonitor {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBDamageState;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBImmoblizedState;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBGuidedState;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBEscapedState;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBIsInInjuredBleedout;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBDyingTimerPercentLeft;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBItemCharge;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBIsChased;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBWasInStimulusSight;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBWasBeingAimedAt;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBIsBeingAimedAt;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBIsBeingAttacked;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBIsChained;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBIsInPressureZone;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBIsInActivatedRBT;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBIsInDeathTimer;
    
    UPROPERTY(EditInstanceOnly)
    float DeathTimerEndGamePrecent;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBHasCrowAttached;
    
    UBTService_StateMonitor_Camper();
};

