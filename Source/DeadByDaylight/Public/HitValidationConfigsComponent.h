#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HitValidationConfigsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UHitValidationConfigsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UHitValidationConfigsComponent();
    UFUNCTION(Exec)
    void DBD_PrintInGameHitValidationConfigs();
    
};

