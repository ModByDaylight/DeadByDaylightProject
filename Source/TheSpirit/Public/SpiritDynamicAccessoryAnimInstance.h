#pragma once
#include "CoreMinimal.h"
#include "DynamicAccessoryAnimInstance.h"
#include "SpiritDynamicAccessoryAnimInstance.generated.h"

UCLASS(NonTransient)
class USpiritDynamicAccessoryAnimInstance : public UDynamicAccessoryAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isPassivePhaseWalkHusk;
    
public:
    USpiritDynamicAccessoryAnimInstance();
};

