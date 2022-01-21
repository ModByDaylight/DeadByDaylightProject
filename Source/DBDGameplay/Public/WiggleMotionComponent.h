#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESkillCheckCustomType.h"
#include "WiggleMotionComponent.generated.h"

class ADBDPlayer;
class UDBDCharacterMovementComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UWiggleMotionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ADBDPlayer* _carriedPlayer;
    
    UPROPERTY(Export, Transient)
    UDBDCharacterMovementComponent* _ownerMovementComponent;
    
public:
    UWiggleMotionComponent();
    UFUNCTION(BlueprintCallable)
    void SetIsBeingWiggled(const bool isBeingWiggled);
    
private:
    UFUNCTION(Reliable, Server)
    void Server_SetIsBeingWiggled(const bool isBeingWiggled);
    
    UFUNCTION()
    void OnWiggleSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type);
    
    UFUNCTION()
    void OnSurvivorRemoved(ADBDPlayer* target);
    
    UFUNCTION()
    void OnSurvivorPickedUp(ADBDPlayer* target);
    
    UFUNCTION()
    void OnHideWiggleSkillCheck(ESkillCheckCustomType type);
    
};

