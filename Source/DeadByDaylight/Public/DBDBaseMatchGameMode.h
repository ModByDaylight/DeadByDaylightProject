#pragma once
#include "CoreMinimal.h"
#include "DBDBaseGameMode.h"
#include "DBDBaseMatchGameMode.generated.h"

class ANetworkFenceActor;
class UEndGameComponent;
class UEscapeRequirementTracker;

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
    UFUNCTION(BlueprintPure)
    UEndGameComponent* GetEndGameComponent() const;
    
    ADBDBaseMatchGameMode();
};

