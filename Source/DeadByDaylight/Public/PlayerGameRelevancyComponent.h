#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "PlayerGameRelevancyComponent.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UPlayerGameRelevancyComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    FTagStateBool _isRelevantToGameplay;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPlayerGameRelevancyComponent();
};

