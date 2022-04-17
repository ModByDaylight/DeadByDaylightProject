#pragma once
#include "CoreMinimal.h"
#include "BTService_StimuliMonitor.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "AITunableParameter.h"
#include "BTService_StimuliMonitor_Slasher.generated.h"

UCLASS()
class DBDBOTS_API UBTService_StimuliMonitor_Slasher : public UBTService_StimuliMonitor {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBInvestigateStimulusLocation;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBInvestigateStimulusActor;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBInBehaviorInvestigationStep;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBIsBlind;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBChasedActor;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter UseNextStimulusInvestigationAfterChaseDelay;
    
    UPROPERTY(EditInstanceOnly)
    float IgnorePreviousChasedStimulusActorDelay;
    
    UPROPERTY(EditInstanceOnly)
    float DefaultStimulusToInvestigateMaxAge;
    
    UPROPERTY(EditInstanceOnly)
    float KOStimulusToInvestigateMaxAge;
    
    UPROPERTY(EditInstanceOnly)
    float NextStimulusInvestigationMinRange;
    
    UPROPERTY(EditInstanceOnly)
    float CantSeeOverBlindRatio;
    
    UPROPERTY(EditInstanceOnly)
    float FavorizeStandingTargetInRange;
    
    UPROPERTY(EditInstanceOnly)
    float FavorizeStandingTargetOutRange;
    
    UBTService_StimuliMonitor_Slasher();
};

