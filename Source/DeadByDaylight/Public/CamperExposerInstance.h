#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CamperExposerInstance.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ACamperExposerInstance : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    bool IsInterior;
    
private:
    UPROPERTY(EditAnywhere)
    FString _audioAgravationLevelRtpc;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartSpawnSequence(bool withRandomDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartExitSequence(bool withRandomDelay);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsInteriorBP(bool interior);
    
public:
    UFUNCTION(BlueprintCallable)
    void ExitSequenceComplete();
    
    ACamperExposerInstance();
};

