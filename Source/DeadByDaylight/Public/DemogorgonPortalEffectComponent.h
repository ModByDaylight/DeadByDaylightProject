#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DemogorgonPortalEffectComponent.generated.h"

class UGameplayModifierContainer;
class UStatusEffect;
class ADBDPlayer;

UCLASS(BlueprintType, EditInlineNew)
class DEADBYDAYLIGHT_API UDemogorgonPortalEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName _statusEffectName;
    
    UPROPERTY(EditAnywhere)
    float _effectLingerDuration;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UStatusEffect> _effect;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ADBDPlayer> _originatingPlayer;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UGameplayModifierContainer> _originatingEffect;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_Initialize(const FName statusEffect, const float& lingerDuration, ADBDPlayer* originatingPlayer, UGameplayModifierContainer* originatingEffect);
    
    UDemogorgonPortalEffectComponent();
};

