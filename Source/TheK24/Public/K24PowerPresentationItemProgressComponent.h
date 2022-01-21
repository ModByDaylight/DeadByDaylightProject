#pragma once
#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K24PowerPresentationItemProgressComponent.generated.h"

class AK24Power;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK24PowerPresentationItemProgressComponent : public UPresentationItemProgressComponent {
    GENERATED_BODY()
public:
    UK24PowerPresentationItemProgressComponent();
    UFUNCTION(BlueprintCallable)
    void SetK24Power(AK24Power* k24Power);
    
};

