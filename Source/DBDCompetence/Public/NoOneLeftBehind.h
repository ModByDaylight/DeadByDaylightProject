#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "NoOneLeftBehind.generated.h"

UCLASS()
class UNoOneLeftBehind : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<float> _speedBoostEffect;
    
public:
    UFUNCTION(BlueprintPure)
    float GetSpeedBoostEffect() const;
    
    UNoOneLeftBehind();
};

