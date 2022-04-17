#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnPalletStunned_AuthorityDelegate.h"
#include "UObject/NoExportTypes.h"
#include "TriggerDecoyVisibilityVFXDelegate.h"
#include "UObject/NoExportTypes.h"
#include "DecoySlasherComponent.generated.h"

class ASlasherPlayer;
class UTerrorRadiusEmitterComponent;
class AActor;
class URedStainComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDecoySlasherComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPalletStunned_Authority OnPalletStunned_Authority;
    
    UPROPERTY(BlueprintAssignable)
    FTriggerDecoyVisibilityVFX TriggerDecoyVisibilityVFX;
    
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
    UDecoySlasherComponent();
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
    
};

