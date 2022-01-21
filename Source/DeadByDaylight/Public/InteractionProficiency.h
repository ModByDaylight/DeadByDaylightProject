#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStatusEffectType.h"
#include "InteractionProficiency.generated.h"

class UChargeableInteractionDefinition;
class ADBDPlayer;

UCLASS(Blueprintable)
class UInteractionProficiency : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FString> InteractionIDs;
    
public:
    UInteractionProficiency();
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetValue(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    EStatusEffectType GetType(const float value) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetLevel(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool GetIsActive(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const;
    
};

