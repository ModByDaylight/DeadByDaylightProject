#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "StakeOutPerk.generated.h"

UCLASS()
class UStakeOutPerk : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> MaxTokensByLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TokenChargeTime;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ConsumeToken();
    
public:
    UFUNCTION(BlueprintCallable)
    void Local_BroadcastConsumeToken();
    
    UStakeOutPerk();
};

