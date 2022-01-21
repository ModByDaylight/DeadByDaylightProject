#pragma once
#include "CoreMinimal.h"
#include "BaseCharacterRotationStrategy.h"
#include "K25SurvivorChainRotationStrategy.generated.h"

class ACamperPlayer;
class UK25SurvivorChainAttachmentComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25SurvivorChainRotationStrategy : public UBaseCharacterRotationStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<ACamperPlayer> _cachedSurvivor;
    
    UPROPERTY(Export, Transient)
    UK25SurvivorChainAttachmentComponent* _cachedChainAttachmentComponent;
    
public:
    UK25SurvivorChainRotationStrategy();
};

