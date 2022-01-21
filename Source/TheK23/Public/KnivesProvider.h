#pragma once
#include "CoreMinimal.h"
#include "AuthoritativeActorPoolComponent.h"
#include "ProjectileProvider.h"
#include "KnivesProvider.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UKnivesProvider : public UAuthoritativeActorPoolComponent, public IProjectileProvider {
    GENERATED_BODY()
public:
    UKnivesProvider();
    
    // Fix for true pure virtual functions not being implemented
};

