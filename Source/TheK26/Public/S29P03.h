#pragma once
#include "CoreMinimal.h"
#include "BoonPerk.h"
#include "S29P03.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class US29P03 : public UBoonPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _recoverSpeedPercentage[3];
    
public:
    US29P03();
};

