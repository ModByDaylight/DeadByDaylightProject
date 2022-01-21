#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "AuraOverriderComponent.generated.h"

class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UAuraOverriderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAuraOverriderComponent();
    UFUNCTION(BlueprintCallable)
    void ResetAura(const AActor* actor);
    
    UFUNCTION(BlueprintCallable)
    void ForceShowAura(const AActor* actor, const FLinearColor& color, bool isAlwaysVisible, const float minimumOutlineDistance);
    
};

