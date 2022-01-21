#pragma once
#include "CoreMinimal.h"
#include "CharacterTool.h"
#include "CharacterToolPlayMode.generated.h"

class UAnimInstance;

UCLASS()
class ACharacterToolPlayMode : public ACharacterTool {
    GENERATED_BODY()
public:
    ACharacterToolPlayMode();
    UFUNCTION(BlueprintCallable)
    TArray<UAnimInstance*> GetAnimationInstances();
    
};

