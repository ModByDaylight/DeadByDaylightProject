#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "HookSurvivorDefinition.generated.h"

class ACamperPlayer;
class AMeatHook;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UHookSurvivorDefinition : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ACamperPlayer* _survivorBeingHooked;
    
public:
    UHookSurvivorDefinition();
protected:
    UFUNCTION(BlueprintPure)
    AMeatHook* GetMeatHook() const;
    
};

