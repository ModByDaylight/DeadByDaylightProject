#pragma once
#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor.h"
#include "EFindInteractableGeneratorStatusFilter.h"
#include "BTService_FindInteractor_Generator.generated.h"

UCLASS()
class DBDBOTS_API UBTService_FindInteractor_Generator : public UBTService_FindInteractor {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    EFindInteractableGeneratorStatusFilter StatusFilter;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter MinRepairRatioFilter;
    
    UPROPERTY(EditInstanceOnly)
    bool UsePerceptionToGetRepairRatio;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter MaxRepairGoalWeight;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter InfectedStateGoalWeight;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter HexRuinGoalWeight;
    
    UPROPERTY(EditInstanceOnly)
    FName HexRuinPerkId;
    
    UBTService_FindInteractor_Generator();
};

