#pragma once
#include "CoreMinimal.h"
#include "DefaultObjectPlacementValidationStrategy.h"
#include "ObjectPlacementValidationWithRestrictionStrategy.generated.h"

class URestrictedPlacementAreaStrategy;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UObjectPlacementValidationWithRestrictionStrategy : public UDefaultObjectPlacementValidationStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, Export, NoClear)
    TArray<URestrictedPlacementAreaStrategy*> _restrictedAreas;
    
public:
    UObjectPlacementValidationWithRestrictionStrategy();
protected:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
};

