#pragma once
#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "Components/ActorComponent.h"
#include "DBDPlayerPositionOffsetComponent.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDPlayerPositionOffsetComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FPerPlatformFloat _menuZHeadOffset;
    
public:
    UDBDPlayerPositionOffsetComponent();
};

