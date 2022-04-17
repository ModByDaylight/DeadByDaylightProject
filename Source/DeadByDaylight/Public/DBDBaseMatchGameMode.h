#pragma once
#include "CoreMinimal.h"
#include "DBDBaseGameMode.h"
#include "DBDBaseMatchGameMode.generated.h"

class UEndGameComponent;
class UEscapeRequirementTracker;
class ANetworkFenceActor;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ADBDBaseMatchGameMode : public ADBDBaseGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, Export)
    UEndGameComponent* _endGameComponent;
    
    UPROPERTY(Transient)
    UEscapeRequirementTracker* _escapeRequirementTracker;
    
    UPROPERTY(Transient)
    ANetworkFenceActor* _theFence;
    
public:
    ADBDBaseMatchGameMode();
    UFUNCTION(BlueprintPure)
    UEndGameComponent* GetEndGameComponent() const;
    
};

