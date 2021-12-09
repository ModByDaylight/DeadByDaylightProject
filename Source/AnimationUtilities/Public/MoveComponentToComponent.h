#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoveComponentToComponent.generated.h"

class USceneComponent;

UCLASS(BlueprintType)
class ANIMATIONUTILITIES_API UMoveComponentToComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start(USceneComponent* componentToMove, const USceneComponent* target, const float duration);
    
    UMoveComponentToComponent();
};

