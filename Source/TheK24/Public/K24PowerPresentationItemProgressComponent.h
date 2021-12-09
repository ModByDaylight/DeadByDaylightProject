#pragma once
#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K24PowerPresentationItemProgressComponent.generated.h"

class AK24Power;

UCLASS(BlueprintType)
class UK24PowerPresentationItemProgressComponent : public UPresentationItemProgressComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetK24Power(AK24Power* k24Power);
    
    UK24PowerPresentationItemProgressComponent();
};

