#pragma once
#include "CoreMinimal.h"
#include "StunnableComponent.h"
#include "SlasherStunnableComponent.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API USlasherStunnableComponent : public UStunnableComponent {
    GENERATED_BODY()
public:
    UFUNCTION(Reliable, Server)
    void Server_NotifyStunHasBeenProcessed();
    
    USlasherStunnableComponent();
};

