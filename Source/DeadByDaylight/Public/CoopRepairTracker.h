#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CoopRepairTracker.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UCoopRepairTracker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<ADBDPlayer*> _coopRepairerHistory;
    
public:
    UCoopRepairTracker();
    UFUNCTION(BlueprintCallable)
    void SetHasEverCoopRepaired(const ADBDPlayer* player);
    
    UFUNCTION(BlueprintPure)
    bool HasEverCoopRepaired(const ADBDPlayer* player) const;
    
};

