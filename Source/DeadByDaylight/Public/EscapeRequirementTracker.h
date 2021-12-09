#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "EscapeRequirementTracker.generated.h"

class AGenerator;
class ADBDGameState;

UCLASS()
class UEscapeRequirementTracker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<AGenerator*> _escapeGenerators;
    
    UPROPERTY(Transient)
    ADBDGameState* _dbdGameState;
    
    UFUNCTION()
    void OnGameEventDispatched(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
public:
    UEscapeRequirementTracker();
};

