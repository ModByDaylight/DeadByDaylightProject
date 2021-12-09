#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RestrictedPlacementAreaStrategy.h"
#include "RestrictedPlacementAreaDefaultStrategy.generated.h"

class AActor;

UCLASS(EditInlineNew)
class URestrictedPlacementAreaDefaultStrategy : public URestrictedPlacementAreaStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> RestrictedActor;
    
public:
    URestrictedPlacementAreaDefaultStrategy();
};

