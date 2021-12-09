#pragma once
#include "CoreMinimal.h"
#include "DefaultObjectPlacementValidationStrategy.h"
#include "ObjectPlacementValidationWithRestrictionStrategy.generated.h"

class URestrictedPlacementAreaStrategy;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UObjectPlacementValidationWithRestrictionStrategy : public UDefaultObjectPlacementValidationStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, Export, NoClear)
    TArray<URestrictedPlacementAreaStrategy*> _restrictedAreas;
    
protected:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
public:
    UObjectPlacementValidationWithRestrictionStrategy();
};

