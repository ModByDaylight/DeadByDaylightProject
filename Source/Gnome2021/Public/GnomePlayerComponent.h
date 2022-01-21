#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GnomePlayerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UGnomePlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    bool _hasInteractedWithGnomeThisGame;
    
public:
    UGnomePlayerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

