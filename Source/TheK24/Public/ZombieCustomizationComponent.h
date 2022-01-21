#pragma once
#include "CoreMinimal.h"
#include "CustomizedSkeletalMesh.h"
#include "ZombieCustomizationComponent.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UZombieCustomizationComponent : public UCustomizedSkeletalMesh {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<ACamperPlayer> _survivorSource;
    
public:
    UZombieCustomizationComponent();
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetZombieCustomization(ACamperPlayer* survivor);
    
};

