#pragma once
#include "CoreMinimal.h"
#include "NavigationQueryFilter_Player.h"
#include "NavigationQueryFilter_Camper.generated.h"

UCLASS()
class DBDBOTS_API UNavigationQueryFilter_Camper : public UNavigationQueryFilter_Player {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float SlasherAreaBoundsLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float SlasherAreaPenetrationCost;
    
    UPROPERTY(EditDefaultsOnly)
    float SlasherInSightCost;
    
    UPROPERTY(EditDefaultsOnly)
    float SlasherAreaExcludeUnderRange;
    
    UPROPERTY(EditDefaultsOnly)
    float SlasherInExcludeAreaCost;
    
    UNavigationQueryFilter_Camper();
};

