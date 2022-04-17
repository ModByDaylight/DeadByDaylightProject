#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "GameEventBloodOrbDropParams.h"
#include "UObject/NoExportTypes.h"
#include "BloodOrbConfiguratorComponent.generated.h"

class ADBDPlayer;
class UBloodOrbVisibilityComponent;
class ABloodOrb;
class AMobileBloodOrbRenderer;
class UBloodOrbAbsorberComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBloodOrbConfiguratorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABloodOrb> _bloodOrbClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameEventBloodOrbDropParams> _bloodOrbDropGameEvents;
    
    UPROPERTY(EditDefaultsOnly)
    float _fadeDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float _initialFadeOutDelay;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _bloodOrbAuraColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _bloodOrbAttractedAuraColor;
    
    UPROPERTY(EditDefaultsOnly)
    float _bloodOrbVisibilityRangeInterpolationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AMobileBloodOrbRenderer> _mobileBloodOrbRendererClass;
    
public:
    UBloodOrbConfiguratorComponent();
private:
    UFUNCTION()
    void UpdateSurvivorBloodOrbVisibilityRange(UBloodOrbVisibilityComponent* bloodOrbVisibilityComponent, const ADBDPlayer* killer) const;
    
    UFUNCTION()
    void UpdateKillerBloodOrbVisiblityRanges(UBloodOrbVisibilityComponent* bloodOrbVisibilityComponent, ADBDPlayer* killer) const;
    
    UFUNCTION()
    void UpdateBloodOrbAttractSpeed(UBloodOrbAbsorberComponent* bloodOrbAbsorberComponent, ADBDPlayer* killer) const;
    
    UFUNCTION()
    void OnLevelReadyToPlay();
    
    UFUNCTION()
    void Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier(const ADBDPlayer* killer) const;
    
};

