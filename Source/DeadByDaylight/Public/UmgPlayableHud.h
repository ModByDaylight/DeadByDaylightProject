#pragma once
#include "CoreMinimal.h"
#include "UmgPlayerHud.h"
#include "UmgPlayableHud.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUmgPlayableHud : public UUmgPlayerHud {
    GENERATED_BODY()
public:
    UUmgPlayableHud();
};

