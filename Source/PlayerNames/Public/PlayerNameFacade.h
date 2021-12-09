#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PlayerNameFacade.generated.h"

UCLASS()
class PLAYERNAMES_API UPlayerNameFacade : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPlayerNameFacade();
};

