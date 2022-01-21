#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Madness.h"
#include "SurvivorMadnessEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USurvivorMadnessEffect : public UStatusEffect, public IMadness {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    float _madness;
    
public:
    USurvivorMadnessEffect();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_AddMadness(float madnessToAdd);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStaticBlastReceived_BP();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnStaticBlastReceived();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSnapOutOfIt_BP();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSnapOutOfIt();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShockTherapyReceived_BP();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnShockTherapyReceived();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnMadnessTierUp_BP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMadnessTierDown_BP();
    
private:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_UpdateMadnessPlayerTags(int32 newMadness);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_OnMadnessTierUp();
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_OnMadnessTierDown();
    
public:
    UFUNCTION(BlueprintPure)
    float GetMadnessValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMadnessTier() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void ChangeMadnessAudio_Cosmetic(const int32 madnessTier);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Authority_OnMadnessScreamTimerEnd_BP();
    
    
    // Fix for true pure virtual functions not being implemented
};

