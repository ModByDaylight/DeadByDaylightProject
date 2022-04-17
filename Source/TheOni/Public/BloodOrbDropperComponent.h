#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "ECamperDamageState.h"
#include "BloodOrbDropParams.h"
#include "GameplayTagContainer.h"
#include "BloodOrbDropperComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEONI_API UBloodOrbDropperComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBloodOrbDropperComponent();
private:
    UFUNCTION(Exec)
    void DBD_DropBloodOrbs(const int32 numOrbs) const;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetPaused(const bool paused);
    
private:
    UFUNCTION()
    void Authority_OnOwningCamperDamageStateChanged(const ECamperDamageState oldState, const ECamperDamageState newState);
    
    UFUNCTION()
    void Authority_OnDropOrbsGameEvent(const FGameplayTag gameEvent, const FGameEventData& gameEventData, const FBloodOrbDropParams dropParams) const;
    
    UFUNCTION()
    void Authority_OnCamperUnhooked(const FGameplayTag gameEvent, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void Authority_OnCamperHooked(const FGameplayTag gameEvent, const FGameEventData& gameEventData) const;
    
    UFUNCTION()
    void Authority_OnCamperCrouched(const FGameplayTag gameEvent, const FGameEventData& gameEventData);
    
};

