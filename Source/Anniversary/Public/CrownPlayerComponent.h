#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TagStateBool.h"
#include "CrownPlayerComponent.generated.h"

UCLASS(Blueprintable)
class ANNIVERSARY_API UCrownPlayerComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_hasInteractedWithCrownPillarThisGame)
    bool _hasInteractedWithCrownPillarThisGame;
    
    UPROPERTY(Transient)
    FTagStateBool _isCrownEventActive;
    
    UFUNCTION()
    void OnRep_hasInteractedWithCrownPillarThisGame();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void Cosmetic_OnInteractedWithCrownPillar();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCrownPlayerComponent();
};

