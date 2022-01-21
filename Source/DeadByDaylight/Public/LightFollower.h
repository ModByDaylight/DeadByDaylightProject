#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LightFollower.generated.h"

class ULightComponent;

UCLASS(BlueprintType, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API ULightFollower : public UActorComponent {
    GENERATED_BODY()
public:
    ULightFollower();
    UFUNCTION(BlueprintCallable)
    void SetLeader(ULightComponent* leader, float maxIntensity);
    
    UFUNCTION(BlueprintCallable)
    void AddFollower(ULightComponent* follower);
    
};

