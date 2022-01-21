#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "ResiliencePerk.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UResiliencePerk : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, EditFixedSize)
    float _actionSpeed[3];
    
public:
    UResiliencePerk();
};

