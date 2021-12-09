#pragma once
#include "CoreMinimal.h"
#include "AuthoritativePoolableActorComponent.h"
#include "PoolableProjectileComponent.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UPoolableProjectileComponent : public UAuthoritativePoolableActorComponent {
    GENERATED_BODY()
public:
    UPoolableProjectileComponent();
};

