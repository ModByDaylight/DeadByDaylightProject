#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EBloodOrbState.h"
#include "UObject/NoExportTypes.h"
#include "BloodOrb.generated.h"

class USceneComponent;
class UDBDOutlineComponent;
class UBloodOrbFadeComponent;
class ADBDPlayer;

UCLASS()
class THEONI_API ABloodOrb : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval _randomMoveDelayInterval;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* _absorbReference;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UDBDOutlineComponent* _outlineComponent;
    
    UPROPERTY(EditDefaultsOnly)
    float _despawnDelay;
    
private:
    UPROPERTY(Replicated, Transient)
    TWeakObjectPtr<ADBDPlayer> _droppingPlayer;
    
    UPROPERTY(ReplicatedUsing=OnRep_State)
    EBloodOrbState _state;
    
    UPROPERTY(Export, VisibleDefaultsOnly)
    UBloodOrbFadeComponent* _fadeComponent;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void UpdateAttracted_Cosmetic(const FVector destination, ADBDPlayer* absorber, const float deltaTime);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void UpdateAbsorbed_Cosmetic(const FVector destination, ADBDPlayer* absorber, const float deltaTime);
    
private:
    UFUNCTION()
    void OnRep_State(const EBloodOrbState oldState);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnIsAttractedChangedCosmetic(const bool isAttracted);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDestroyedCosmetic();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAbsorbedCosmetic();
    
public:
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetDroppingPlayer() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void Authority_OnDropped(const ADBDPlayer* droppedBy, const float impulseFactor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_OnDropFinished();
    
private:
    UFUNCTION()
    void Authority_DestroyBloodOrb();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_Despawn();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ABloodOrb();
};

