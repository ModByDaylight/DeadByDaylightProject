#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkSoundLoop.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "RifleChain.generated.h"

class UInstancedStaticMeshComponent;
class USplineComponent;
class UAkComponent;
class UAkAudioEvent;
class UGunslingerHarpoon;
class IGunslingerHarpoon;
class UCurveFloat;
class ADBDPlayer;
class URiflePlayerLinker;
class URifleChainTensionComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRifleChainOnProjectileSet, AActor*, projectile);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRifleChainOnIsCollidingChanged, bool, isColliding);

UCLASS()
class THEGUNSLINGER_API ARifleChain : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRifleChainOnProjectileSet OnProjectileSet;
    
    UPROPERTY(BlueprintAssignable)
    FRifleChainOnIsCollidingChanged OnIsCollidingChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UAkComponent* _chainCenterAkComponent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* _collisionLoopStartEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* _collisionLoopEndEvent;
    
    UPROPERTY(Transient)
    TArray<FAkSoundLoop> _collisionSoundLoops;
    
private:
    UPROPERTY(EditAnywhere)
    float _sphereTraceRadius;
    
    UPROPERTY(EditAnywhere)
    float _timeBetweenTrace;
    
    UPROPERTY(Transient)
    TScriptInterface<IGunslingerHarpoon> _harpoon;
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateChainMesh(UInstancedStaticMeshComponent* mesh, USplineComponent* spline, float alpha);
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnChainPoints(FVector start, FVector stop, UCurveFloat* influenceCurve, float pointYPosition, float pointZPosition, bool useOffset, USplineComponent* spline);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnattachFromPlayer(ADBDPlayer* player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReelBackToRifle();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLaunch();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttachToPlayer(ADBDPlayer* player);
    
    UFUNCTION(BlueprintPure)
    bool IsColliding() const;
    
    UFUNCTION(BlueprintPure)
    float GetUnwindingSpeed() const;
    
    UFUNCTION(BlueprintPure)
    URiflePlayerLinker* GetRiflePlayerLinker() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FHitResult> GetFirstAndLastCollisionHits() const;
    
    UFUNCTION(BlueprintPure)
    URifleChainTensionComponent* GetChainTensionComponent() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetChainStart() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetChainEnd() const;
    
    ARifleChain();
};

