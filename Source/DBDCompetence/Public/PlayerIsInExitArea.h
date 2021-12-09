#pragma once
#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "PlayerIsInExitArea.generated.h"

UCLASS()
class UPlayerIsInExitArea : public UGameplayModifierCondition {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void PlayerExitExitArea();
    
    UFUNCTION()
    void PlayerEnterExitArea();
    
public:
    UPlayerIsInExitArea();
};

