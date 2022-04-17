#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIController.h"
#include "EPawnInputPressTypes.h"
#include "EAIDifficultyLevel.h"
#include "ECharacterMovementTypes.h"
#include "DBDAIController.generated.h"

class APawn;
class UNavigationQueryFilter;
class UObject;

UCLASS()
class DEADBYDAYLIGHT_API ADBDAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float DefaultSightRange;
    
    UPROPERTY(EditDefaultsOnly)
    float CloakedTargetSightRange;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EAIDifficultyLevel, int32> AIDifficultyMaxPlayerRanks;
    
    UPROPERTY(EditDefaultsOnly)
    float RotateCameraOnStationaryWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float RotateCameraOnStationaryDegreePerSecond;
    
protected:
    UPROPERTY(Transient)
    APawn* _aiPawn;
    
    UPROPERTY(Transient)
    APawn* _lastAiPawn;
    
private:
    UPROPERTY(Transient)
    TMap<UObject*, float> _contextualPathSpeedFactors;
    
    UPROPERTY(Transient)
    UObject* _objOverridingDefaultNavigationFilter;
    
    UPROPERTY(Transient)
    TSubclassOf<UNavigationQueryFilter> _originalDefaultNavigationFilter;
    
    UPROPERTY(Transient)
    TMap<EPawnInputPressTypes, UObject*> _inputLocks;
    
    UPROPERTY(Transient)
    UObject* _movementLock;
    
public:
    ADBDAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
    UFUNCTION(BlueprintCallable)
    void WiggleRequest(const UObject* requester, float input);
    
    UFUNCTION(BlueprintCallable)
    void UseItemRequest(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void StruggleRequest(const UObject* requester, float input);
    
    UFUNCTION(BlueprintCallable)
    bool SetCharacterMovement(ECharacterMovementTypes movementTypes, const UObject* requester);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetAIPlayerRank(int32 playerRank);
    
public:
    UFUNCTION(BlueprintCallable)
    void SecondAttackRequest(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void SecondaryActionRequest(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void InteractRequestRelease(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void InteractRequest(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void Gesture04Request(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void Gesture03Request(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void Gesture02Request(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void Gesture01Request(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void FastInteractRequest(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void EndUseItemRequest(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void EndSecondAttackRequest(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void EndInteractRequest(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void EndFastInteractRequest(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void EndDropItemRequest(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void EndActionRequest(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void DropItemRequest(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void AttackRequest(const UObject* requester);
    
    UFUNCTION(BlueprintCallable)
    void ActionRequest(const UObject* requester);
    
};

