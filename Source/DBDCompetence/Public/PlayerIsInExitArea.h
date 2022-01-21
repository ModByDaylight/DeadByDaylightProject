#pragma once
#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "PlayerIsInExitArea.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UPlayerIsInExitArea : public UGameplayModifierCondition {
    GENERATED_BODY()
public:
    UPlayerIsInExitArea();
private:
    UFUNCTION()
    void PlayerExitExitArea();
    
    UFUNCTION()
    void PlayerEnterExitArea();
    
};

