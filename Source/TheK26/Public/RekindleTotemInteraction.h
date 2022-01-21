#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractionDefinition.h"
#include "RekindleTotemInteraction.generated.h"

class ARekindledTotem;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK26_API URekindleTotemInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _slasherFacingTolerance;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ARekindledTotem> _rekindledTotemClass;
    
    UPROPERTY(Transient)
    ARekindledTotem* _rekindledTotem;
    
public:
    URekindleTotemInteraction();
};

