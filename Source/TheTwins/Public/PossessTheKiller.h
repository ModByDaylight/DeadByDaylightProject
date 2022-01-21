#pragma once
#include "CoreMinimal.h"
#include "PossessPlayer.h"
#include "PossessTheKiller.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UPossessTheKiller : public UPossessPlayer {
    GENERATED_BODY()
public:
    UPossessTheKiller();
};

