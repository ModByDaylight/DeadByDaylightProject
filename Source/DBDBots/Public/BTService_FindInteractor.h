#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTService.h"
#include "AIGoalGeneratorInterface.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor.generated.h"

class UInteractor;
class UNavigationQueryFilter;
class ADBDAIBTController;

UCLASS(Abstract)
class DBDBOTS_API UBTService_FindInteractor : public UBTService, public IAIGoalGeneratorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBSearchAround;
    
    UPROPERTY(EditInstanceOnly)
    float SearchInterval;
    
    UPROPERTY(EditInstanceOnly)
    float SearchHeightAmplifierActivationHeight;
    
    UPROPERTY(EditInstanceOnly)
    float SearchHeightAmplifier;
    
    UPROPERTY(EditInstanceOnly)
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UPROPERTY(EditInstanceOnly)
    bool RegisterAsDiscoveredWhenFound;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBOnlyFromActor;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FString> OnlyWithInteractorIDs;
    
    UPROPERTY(EditInstanceOnly)
    float RejectIfTerrorIsCloserThanSelfMargin;
    
    UPROPERTY(EditInstanceOnly)
    float RejectIfInTerrorRadius;
    
    UPROPERTY(EditInstanceOnly)
    bool RejectIfInPressureZone;
    
    UPROPERTY(EditInstanceOnly)
    bool UseLastKnownPositionForTerrorRejects;
    
    UPROPERTY(EditInstanceOnly)
    bool RejectIfWasInCooldownAndFocusedOnAnotherObject;
    
    UPROPERTY(EditInstanceOnly)
    FName RejectCooldownContextName;
    
    UPROPERTY(EditInstanceOnly)
    bool AbandonIfInChase;
    
    UPROPERTY(EditInstanceOnly)
    bool RejectIfFocusedByOther;
    
    UPROPERTY(EditInstanceOnly)
    bool RejectIfNotFocusedBySelf;
    
    UPROPERTY(EditInstanceOnly)
    bool IgnoreFocusFilterInEndgameCollapse;
    
    UPROPERTY(EditInstanceOnly)
    bool RejectIfNotInSight;
    
    UPROPERTY(EditInstanceOnly)
    bool IgnoreSightFilterIfDiscovered;
    
    UPROPERTY(EditInstanceOnly)
    bool IgnoreSightFilterIfInRange;
    
    UPROPERTY(EditInstanceOnly)
    float RejectAboveRange;
    
    UPROPERTY(EditInstanceOnly)
    bool IgnoreRangeFilterIfDiscovered;
    
    UPROPERTY(EditInstanceOnly)
    bool IgnoreRangeFilterIfInSight;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBInteractLocation;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBInteractorObj;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter CantInterruptGoalInteractionUnderRemainingTime;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter GoalBasicWeight;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter GoalWeightMaxDistance;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter GoalWeightAtMinDistance;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter GoalWeightAtEndgameStart;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter GoalWeightAtEndgameEnd;
    
protected:
    UPROPERTY(Export, Transient)
    UInteractor* _goalInteractor;
    
    UPROPERTY(Transient)
    ADBDAIBTController* _aiOwner;
    
public:
    UBTService_FindInteractor();
    
    // Fix for true pure virtual functions not being implemented
};

