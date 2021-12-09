#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BloodwebSettings.generated.h"

UCLASS()
class UBloodwebSettings : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> _duplicableItems;
    
public:
    UBloodwebSettings();
};

