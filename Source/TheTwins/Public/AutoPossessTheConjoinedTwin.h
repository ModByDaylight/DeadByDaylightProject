#pragma once
#include "CoreMinimal.h"
#include "PossessTheConjoinedTwin.h"
#include "AutoPossessTheConjoinedTwin.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UAutoPossessTheConjoinedTwin : public UPossessTheConjoinedTwin {
    GENERATED_BODY()
public:
    UAutoPossessTheConjoinedTwin();
};

