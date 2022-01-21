#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "DBDPathFollowingComponent.generated.h"

class ANavLinkProxy;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float UnblockPathDeviationRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float UnblockPathTimeLimit;
    
private:
    UPROPERTY(Transient)
    TSet<ANavLinkProxy*> _onNavLinkProxies;
    
public:
    UDBDPathFollowingComponent();
};

