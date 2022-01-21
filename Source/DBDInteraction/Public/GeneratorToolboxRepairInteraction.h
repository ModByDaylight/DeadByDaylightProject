#pragma once
#include "CoreMinimal.h"
#include "GeneratorRepairInteraction.h"
#include "DBDTunableRowHandle.h"
#include "GeneratorToolboxRepairInteraction.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGeneratorToolboxRepairInteraction : public UGeneratorRepairInteraction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FText _interactionTextWhenEmpty;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _repairSkillCheckDurationWhenEmpty;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _repairSkillCheckChanceWhenEmpty;
    
public:
    UGeneratorToolboxRepairInteraction();
    UFUNCTION(BlueprintPure)
    bool HasChargedToolBox(const ADBDPlayer* player) const;
    
protected:
    UFUNCTION(BlueprintPure)
    FString GetInteractionTextWhenEmpty() const;
    
};

