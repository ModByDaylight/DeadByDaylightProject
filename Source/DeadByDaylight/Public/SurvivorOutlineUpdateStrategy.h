#pragma once
#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "SurvivorOutlineUpdateStrategy.generated.h"

class UGameplayModifierContainer;
class UTexture;
class ASlasherPlayer;
class ACamperPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorOutlineUpdateStrategy : public UOutlineUpdateStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _inDangerColorForSurvivor;
    
    UPROPERTY(Transient)
    FLinearColor _noRecoveryDyingColor;
    
    UPROPERTY(Transient)
    FLinearColor _fullRecoveryDyingColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _saviourColorForSurvivor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _colorForKiller;
    
    UPROPERTY(EditInstanceOnly)
    UTexture* _revealedGradient;
    
    UPROPERTY(EditInstanceOnly)
    UTexture* _nonRevealedGradient;
    
    UPROPERTY(Transient)
    bool _trappedIconActive;
    
public:
    USurvivorOutlineUpdateStrategy();
    UFUNCTION(BlueprintCallable)
    void SetTrappedIconActive(bool value);
    
    UFUNCTION(BlueprintPure)
    bool IsBlockingAuraReadingFromKiller(const ASlasherPlayer* killer) const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsActivelyHidingAuraFromKiller(const ACamperPlayer* subject, const ASlasherPlayer* witness);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UGameplayModifierContainer*> GetEffectsProtectingFromKillerAuraReading(const ACamperPlayer* subject, const ASlasherPlayer* killer);
    
};

