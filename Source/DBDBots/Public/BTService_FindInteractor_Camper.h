#pragma once
#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor.h"
#include "EFindInteractableCamperFilter.h"
#include "BTService_FindInteractor_Camper.generated.h"

UCLASS()
class DBDBOTS_API UBTService_FindInteractor_Camper : public UBTService_FindInteractor {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    EFindInteractableCamperFilter StatusFilter;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter AllyDangerStateGoalWeight;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter IncapacitatedAlliesGoalWeight;
    
    UBTService_FindInteractor_Camper();
};

