#pragma once
#include "CoreMinimal.h"
#include "AimDirectionProvider.h"
#include "PlayerCameraAimDirectionProvider.generated.h"

UCLASS(EditInlineNew)
class DBDGAMEPLAY_API UPlayerCameraAimDirectionProvider : public UAimDirectionProvider {
    GENERATED_BODY()
public:
    UPlayerCameraAimDirectionProvider();
};

