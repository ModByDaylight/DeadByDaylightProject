#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AimDirectionProvider.generated.h"

UCLASS(Abstract, EditInlineNew)
class DBDGAMEPLAY_API UAimDirectionProvider : public UObject {
    GENERATED_BODY()
public:
    UAimDirectionProvider();
};

