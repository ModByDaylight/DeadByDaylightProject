#pragma once
#include "CoreMinimal.h"
#include "DBDAIController.h"
#include "DBDAIPlayerController.generated.h"

class UAICharacterBehaviour;
class UAICharacterBehaviourData;
class AActor;

UCLASS()
class DEADBYDAYLIGHT_API ADBDAIPlayerController : public ADBDAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UAICharacterBehaviour*> _currentBehaviours;
    
public:
    ADBDAIPlayerController();
    UFUNCTION(BlueprintCallable)
    void StopCharacterBehaviour(const UClass* behaviourClass);
    
    UFUNCTION(BlueprintCallable)
    void StopAllCharacterBehaviours();
    
    UFUNCTION(BlueprintCallable)
    void StartCharacterBehaviour(UClass* behaviourClass, UAICharacterBehaviourData* characterBehaviourData);
    
    UFUNCTION(BlueprintCallable)
    void ResumeCharacterBehaviour(const UClass* behaviourClass);
    
    UFUNCTION(BlueprintCallable)
    void PauseCharacterBehaviour(const UClass* behaviourClass);
    
private:
    UFUNCTION()
    void OnBehaviourEndedHandler(UAICharacterBehaviour* behaviourEnded);
    
public:
    UFUNCTION(BlueprintCallable)
    void MovePlayerToActor(AActor* goal, float acceptanceRadius);
    
};

