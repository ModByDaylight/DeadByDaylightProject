#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HitValidationConfigsComponent.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UHitValidationConfigsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(Exec)
    void DBD_PrintInGameHitValidationConfigs();
    
    UHitValidationConfigsComponent();
};

