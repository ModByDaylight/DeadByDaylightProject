#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE: Engine BHVRPerDetailModeFloat
#include "CharacterOptimizer.generated.h"

class AActor;

UCLASS()
class SIGNIFICANCEUTILITIES_API UCharacterOptimizer : public UActorComponent {
    GENERATED_BODY()
public:
private:
    //UPROPERTY(EditAnywhere)
    //FBHVRPerDetailModeFloat _distance;
    
    UPROPERTY(EditAnywhere)
    float _characterMovementTickRateWhenInsignificant;
    
    UPROPERTY(EditAnywhere)
    float _skeletalMeshTickRateWhenInsignificant;
    
    UPROPERTY(Replicated, Transient)
    TArray<AActor*> _dependentActorsToCheckSignficance;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCharacterOptimizer();
};

