#pragma once
#include "CoreMinimal.h"
#include "CharacterPusherComponent.h"
#include "DBDCharacterPusherComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UDBDCharacterPusherComponent : public UCharacterPusherComponent {
    GENERATED_BODY()
public:
    UDBDCharacterPusherComponent();
};

