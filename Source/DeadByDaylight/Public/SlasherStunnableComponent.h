#pragma once
#include "CoreMinimal.h"
#include "StunnableComponent.h"
#include "SlasherStunnableComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USlasherStunnableComponent : public UStunnableComponent {
    GENERATED_BODY()
public:
    USlasherStunnableComponent();
    UFUNCTION(Reliable, Server)
    void Server_NotifyStunHasBeenProcessed();
    
};

