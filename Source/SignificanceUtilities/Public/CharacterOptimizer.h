#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BHVRPerDetailModeFloat -FallbackName=BHVRPerDetailModeFloat
#include "CharacterOptimizer.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class SIGNIFICANCEUTILITIES_API UCharacterOptimizer : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FBHVRPerDetailModeFloat _distance;
    
    UPROPERTY(EditAnywhere)
    float _characterMovementTickRateWhenInsignificant;
    
    UPROPERTY(EditAnywhere)
    float _skeletalMeshTickRateWhenInsignificant;
    
    UPROPERTY(Replicated, Transient)
    TArray<AActor*> _dependentActorsToCheckSignficance;
    
public:
    UCharacterOptimizer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

