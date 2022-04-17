#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AnimationMontageDescriptor.h"
#include "GeneratorEntity.generated.h"

class UMontagePlayer;
class AGenerator;

UCLASS()
class DEADBYDAYLIGHT_API AGeneratorEntity : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AGenerator* _associatedGenerator;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UMontagePlayer* _montagePlayer;
    
public:
    AGeneratorEntity();
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMeshActive(bool active);
    
    UFUNCTION(BlueprintCallable)
    void SetAssociatedGenerator(AGenerator* generator);
    
    UFUNCTION(BlueprintCallable)
    void PlayMontage(FAnimationMontageDescriptor animMontageID, float playRate, bool isFollower);
    
    UFUNCTION(BlueprintPure)
    UMontagePlayer* GetMontagePlayer() const;
    
};

