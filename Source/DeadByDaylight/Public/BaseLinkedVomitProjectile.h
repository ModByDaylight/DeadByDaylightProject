#pragma once
#include "CoreMinimal.h"
#include "KillerProjectile.h"
#include "UObject/NoExportTypes.h"
#include "ImpactInfo.h"
#include "BaseLinkedVomitProjectile.generated.h"

class USplineMeshComponent;
class UPoolableProjectileComponent;
class UParticleSystemComponent;
class USphereComponent;
class UAkComponent;
class UParticleSystem;
class UAkAudioEvent;
class ACamperPlayer;
class AInteractable;
class USceneComponent;

UCLASS()
class DEADBYDAYLIGHT_API ABaseLinkedVomitProjectile : public AKillerProjectile {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLinkedVomitProjectileDeactivate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _useSplashDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _passThroughSurvivors;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UPoolableProjectileComponent* _poolableProjectile;
    
    UPROPERTY(BlueprintAssignable)
    FOnLinkedVomitProjectileDeactivate OnDeactivateOrLaunch;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* _vomitTrail;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* _splineMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* _splashDamageSphere;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UAkComponent* _akAudioVomitProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* _vomitSplashCamper;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* _vomitSplash;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* _akAudioEventAudioEventVomitSplash;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D _minDecalSize;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D _maxDecalSize;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool _isSuperVomit;
    
public:
    ABaseLinkedVomitProjectile();
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnAffectSurvivor(ACamperPlayer* camperPlayer);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnAffectInteractable(AInteractable* interactable, USceneComponent* hitComponent);
    
    UFUNCTION(BlueprintCallable)
    void NativeExplode(const FImpactInfo& impactInfo);
    
};

