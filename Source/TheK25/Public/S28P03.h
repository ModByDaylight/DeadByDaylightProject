#pragma once
#include "CoreMinimal.h"
#include "BoonPerk.h"
#include "S28P03.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class US28P03 : public UBoonPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _lingerDuration[3];
    
public:
    US28P03();
};

