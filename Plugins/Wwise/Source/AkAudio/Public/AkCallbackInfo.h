#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkCallbackInfo.generated.h"

class UAkComponent;

UCLASS(BlueprintType)
class AKAUDIO_API UAkCallbackInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UAkComponent* AkComponent;
    
    UAkCallbackInfo();
};

