#pragma once
#include "CoreMinimal.h"
#include "DisplayStand.h"
#include "EAtlantaDisplayStandPosition.h"
#include "AtlantaDisplayStand.generated.h"

class USceneComponent;

UCLASS()
class DEADBYDAYLIGHT_API AAtlantaDisplayStand : public ADisplayStand {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    EAtlantaDisplayStandPosition StandPosition;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneComponent* SurvivorPositionMarker;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneComponent* KillerPositionMarker;
    
public:
    AAtlantaDisplayStand();
};

