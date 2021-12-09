#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerDebugComponent.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UPlayerDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    bool _disableStartUpdateMontageDuringEnter;
    
    UPROPERTY(Replicated)
    bool _allowPalletPullUpInteraction;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPlayerDebugComponent();
};

