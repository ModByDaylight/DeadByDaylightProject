#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "AITunableParameter.h"
#include "BTDecorator_Random.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_Random : public UBTDecorator_TickableBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAITunableParameter PercentageRatio;
    
    UBTDecorator_Random();
};

