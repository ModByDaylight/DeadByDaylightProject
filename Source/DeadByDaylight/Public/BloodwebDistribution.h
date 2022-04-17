#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BloodwebDistribution.generated.h"

class UDBDDesignTunables;
class UBloodwebTunables;

UCLASS()
class DEADBYDAYLIGHT_API UBloodwebDistribution : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UDBDDesignTunables* _designTunables;
    
    UPROPERTY(Transient)
    UBloodwebTunables* _bloodwebTunables;
    
public:
    UBloodwebDistribution();
};

