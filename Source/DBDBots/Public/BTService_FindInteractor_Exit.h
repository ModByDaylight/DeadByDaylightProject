#pragma once
#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor.h"
#include "EFindInteractorOpenConditions.h"
#include "EFindInteractorExitOptions.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_FindInteractor_Exit.generated.h"

UCLASS()
class DBDBOTS_API UBTService_FindInteractor_Exit : public UBTService_FindInteractor {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    EFindInteractorExitOptions Filter;
    
    UPROPERTY(EditInstanceOnly)
    EFindInteractorOpenConditions OpenCondition;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBFinalExitLocation;
    
    UPROPERTY(EditInstanceOnly)
    float ClosedDoorOffset;
    
    UPROPERTY(EditInstanceOnly)
    float OpenDoorOffset;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter OpenedExitGoalWeight;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter HatchBonusGoalWeight;
    
    UBTService_FindInteractor_Exit();
};

