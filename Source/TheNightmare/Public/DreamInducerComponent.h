#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "DreamInducerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDreamInducerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UActorComponent> _generatorDreamworldClass;
    
public:
    UDreamInducerComponent();
private:
    UFUNCTION()
    void Authority_OnLevelReadyToPlay();
    
};

