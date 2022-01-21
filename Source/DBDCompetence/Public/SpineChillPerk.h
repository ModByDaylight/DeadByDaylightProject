#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "SpineChillPerk.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USpineChillPerk : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _actionSpeed[3];
    
public:
    USpineChillPerk();
};

