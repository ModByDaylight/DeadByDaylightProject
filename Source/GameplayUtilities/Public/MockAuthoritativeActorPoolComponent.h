#pragma once
#include "CoreMinimal.h"
#include "AuthoritativeActorPoolComponent.h"
#include "MockAuthoritativeActorPoolComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UMockAuthoritativeActorPoolComponent : public UAuthoritativeActorPoolComponent {
    GENERATED_BODY()
public:
    UMockAuthoritativeActorPoolComponent();
};

