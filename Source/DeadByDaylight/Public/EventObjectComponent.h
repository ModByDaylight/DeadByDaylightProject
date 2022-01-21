#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EventObjectComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEventObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName _eventId;
    
public:
    UEventObjectComponent();
};

