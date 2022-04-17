#pragma once
#include "CoreMinimal.h"
#include "Collectable.h"
#include "TheHuntressPower.generated.h"

class ASlasherPlayer;
class UBaseProjectileLauncher;
class UHatchetCooldown;
class UAkComponent;

UCLASS()
class ATheHuntressPower : public ACollectable {
    GENERATED_BODY()
public:
    ATheHuntressPower();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void StartHatchetShineCosmetic();
    
    UFUNCTION(BlueprintCallable)
    void SetPercentThrowStrength(const float percentStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetHatchetVisible(const bool visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PrintDebugThrowInfo();
    
    UFUNCTION(BlueprintPure)
    bool IsHatchetThrowFullyCharged() const;
    
    UFUNCTION(BlueprintPure)
    bool HasHatchet() const;
    
    UFUNCTION(BlueprintPure)
    ASlasherPlayer* GetOwningKiller() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UBaseProjectileLauncher* GetHatchetProjectileLauncher() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    UHatchetCooldown* GetHatchetCooldown() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UAkComponent* GetAkAudioHatchetSpawner() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnThrowInteractionStart();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnThrowInteractionCancelled();
    
};

