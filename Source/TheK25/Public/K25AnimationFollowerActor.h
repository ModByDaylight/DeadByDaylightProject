#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AnimationMontageDescriptor.h"
#include "K25AnimationFollowerActor.generated.h"

class UMontagePlayer;
class USkeletalMeshComponent;
class UAnimationMontageSlave;

UCLASS()
class AK25AnimationFollowerActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USkeletalMeshComponent* _skeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAnimationMontageSlave* _montageFollower;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UMontagePlayer* _montagePlayer;
    
public:
    AK25AnimationFollowerActor();
private:
    UFUNCTION()
    void OnMontageStopped(const FAnimationMontageDescriptor id);
    
    UFUNCTION()
    void OnMontageStarted(const FAnimationMontageDescriptor id, const float rate);
    
    UFUNCTION()
    void OnMontageEnd(const FAnimationMontageDescriptor montage, bool interrupted);
    
};

