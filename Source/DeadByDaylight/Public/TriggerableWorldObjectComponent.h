#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TriggeredDelegate.h"
#include "TriggerResetDelegate.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TriggerableWorldObjectComponent.generated.h"

class ADBDPlayer;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTriggerableWorldObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTriggered OnTriggered;
    
    UPROPERTY(BlueprintAssignable)
    FTriggerReset OnTriggerReset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _triggerResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _randomChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _rollFrequency;
    
private:
    UPROPERTY(Export)
    TWeakObjectPtr<UPrimitiveComponent> _conditionalTriggerVolume;
    
    UPROPERTY(Transient)
    TSet<ADBDPlayer*> _conditionalVolumeOverlappingPlayers;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UPrimitiveComponent> _guaranteedTriggerVolume;
    
public:
    UTriggerableWorldObjectComponent();
    UFUNCTION(BlueprintCallable)
    void SetGuaranteedTriggerVolume(UPrimitiveComponent* volume);
    
    UFUNCTION(BlueprintCallable)
    void SetConditionalTriggerVolume(UPrimitiveComponent* volume);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnTriggerReset();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnTriggered(AActor* instigator, FVector triggerLocation);
    
    UFUNCTION(BlueprintNativeEvent)
    void GetConditionalModifiers(ADBDPlayer* player, float& outAdditive, float& outMultiplicative);
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanPlayerTriggerGuaranteed(ADBDPlayer* player);
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanPlayerTriggerConditional(ADBDPlayer* player);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_Trigger(AActor* instigator, FVector triggerLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_ResetTrigger();
    
protected:
    UFUNCTION()
    void Authority_GuaranteedVolumeOverlap(UPrimitiveComponent* OverlappedComponent, AActor* other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult);
    
    UFUNCTION()
    void Authority_ConditionalVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void Authority_ConditionalVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult);
    
};

