#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Engine/EngineTypes.h"
#include "HeadOn.generated.h"

class AActor;
class ALocker;
class UPrimitiveComponent;
class UStunnableComponent;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHeadOn : public UPerk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsPerformingHeadOn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool ExhaustOnlyOnSuccessfulStun;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool StunKillersEnteringStunZone;
    
protected:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _hideDuration[3];
    
private:
    UPROPERTY(Transient)
    ALocker* _locker;
    
public:
    UHeadOn();
private:
    UFUNCTION()
    void OnPawnOverlapExit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);
    
    UFUNCTION()
    void OnPawnOverlapEnter(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHeadOnAnimationComplete();
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StunPlayer(UStunnableComponent* stunnableComponent, ADBDPlayer* stunner);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanApplyHeadOnInteraction() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_ActivatePerk();
    
};

