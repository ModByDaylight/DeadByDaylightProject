#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "AnimationMontageDescriptor.h"
#include "TwinDestructionComponent.generated.h"

class AActor;
class AConjoinedTwin;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTwinDestructionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> _huskClass;
    
    UPROPERTY(Replicated)
    FTransform _dyingTransform;
    
    UPROPERTY(Replicated)
    bool _diedFromSurvivorRemovingTwin;
    
    UPROPERTY(EditDefaultsOnly)
    float _dyingFromSurvivorTranslation;
    
public:
    UTwinDestructionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTwinQuickDestroy(AConjoinedTwin* owningTwin);
    
private:
    UFUNCTION()
    void OnDyingMontageEnd(const FAnimationMontageDescriptor montage, bool interrupted);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnTwinDestroyedFromSurvivorRemove(AConjoinedTwin* owningTwin);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnTwinDestroyedFromKick(AConjoinedTwin* owningTwin);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_OnTwinQuickDestroyOver();
    
};

