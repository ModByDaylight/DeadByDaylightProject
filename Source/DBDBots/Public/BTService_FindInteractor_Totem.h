#pragma once
#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor.h"
#include "BTService_FindInteractor_Totem.generated.h"

UCLASS()
class DBDBOTS_API UBTService_FindInteractor_Totem : public UBTService_FindInteractor {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter InactiveGoalWeightMaxDistance;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter InactiveGoalWeightAtMinDistance;
    
    UBTService_FindInteractor_Totem();
};

