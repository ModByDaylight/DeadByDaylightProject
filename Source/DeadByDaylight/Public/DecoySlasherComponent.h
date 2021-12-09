#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DecoySlasherComponent.generated.h"

class UTerrorRadiusEmitterComponent;
class AActor;
class ASlasherPlayer;
class URedStainComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDecoySlasherComponentOnPalletStunned_Authority, AActor*, instigator);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDecoySlasherComponentTriggerDecoyVisibilityVFX, bool, visible, const FVector&, location, const FRotator&, rotation);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDecoySlasherComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDecoySlasherComponentOnPalletStunned_Authority OnPalletStunned_Authority;
    
    UPROPERTY(BlueprintAssignable)
    FDecoySlasherComponentTriggerDecoyVisibilityVFX TriggerDecoyVisibilityVFX;
    
protected:
    UPROPERTY(EditAnywhere)
    bool HasTerrorRadius;
    
    UPROPERTY(EditAnywhere)
    bool HasRedGlow;
    
private:
    UPROPERTY(Transient)
    bool _isActive;
    
    UPROPERTY(Transient)
    bool _initialized;
    
    UPROPERTY(Export, Transient)
    UTerrorRadiusEmitterComponent* _terrorRadiusEmitter;
    
    UPROPERTY(Export, Transient)
    URedStainComponent* _redStainComponent;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDecoyIsActive(bool isActive, const FVector& location, const FRotator& rotation, bool visibleRedGlow);
    
private:
    UFUNCTION()
    void OnRealSlasherTerrorRadiusChanged(float newValue);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsDecoyActive() const;
    
    UFUNCTION(BlueprintPure)
    UTerrorRadiusEmitterComponent* GetTerrorRadiusEmitter() const;
    
    UFUNCTION(BlueprintPure)
    ASlasherPlayer* GetRealSlasher() const;
    
    UFUNCTION(BlueprintCallable)
    void DoPostVFXUpdates(const FVector& location, const FRotator& rotation);
    
private:
    UFUNCTION()
    void CopyCustomizationFromSlasher();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_PalletStun(AActor* instigator);
    
    UDecoySlasherComponent();
};

