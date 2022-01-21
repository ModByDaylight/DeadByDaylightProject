#pragma once
#include "CoreMinimal.h"
#include "EventObjectComponent.h"
#include "EventGeneratorComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UEventGeneratorComponent : public UEventObjectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool _updateOultineForSurvivor;
    
    UPROPERTY(EditAnywhere)
    bool _updateOultineForSlasher;
    
public:
    UEventGeneratorComponent();
};

