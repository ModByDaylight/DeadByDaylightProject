#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoveComponentToComponent.generated.h"

class USceneComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class ANIMATIONUTILITIES_API UMoveComponentToComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMoveComponentToComponent();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start(USceneComponent* componentToMove, const USceneComponent* target, const float duration);
    
};

