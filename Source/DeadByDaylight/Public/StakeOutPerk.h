#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "StakeOutPerk.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UStakeOutPerk : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> MaxTokensByLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TokenChargeTime;
    
public:
    UStakeOutPerk();
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ConsumeToken();
    
public:
    UFUNCTION(BlueprintCallable)
    void Local_BroadcastConsumeToken();
    
};

