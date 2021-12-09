#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GnomePlayerComponent.generated.h"

UCLASS()
class UGnomePlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    bool _hasInteractedWithGnomeThisGame;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UGnomePlayerComponent();
};

