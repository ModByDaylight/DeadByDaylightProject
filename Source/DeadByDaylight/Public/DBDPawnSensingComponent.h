#pragma once
#include "CoreMinimal.h"
#include "Perception/PawnSensingComponent.h"
#include "DBDPawnSensingComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDPawnSensingComponent : public UPawnSensingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bSenseEverywhere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PartiallyHiddenSensingDistance;
    
    UDBDPawnSensingComponent();
};

