#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "Untrap.generated.h"

class ABearTrap;

UCLASS(EditInlineNew)
class UUntrap : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FString> _overridableInteractions;
    
    UPROPERTY(EditAnywhere)
    FName _bearTrapUpdateMontageID;
    
    UPROPERTY(EditAnywhere)
    FName _bearTrapFinishMontageID;
    
    UFUNCTION(BlueprintPure)
    ABearTrap* GetTrap() const;
    
public:
    UUntrap();
};

