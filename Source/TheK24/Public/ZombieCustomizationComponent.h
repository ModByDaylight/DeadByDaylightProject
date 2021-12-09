#pragma once
#include "CoreMinimal.h"
#include "CustomizedSkeletalMesh.h"
#include "ZombieCustomizationComponent.generated.h"

class ACamperPlayer;

UCLASS()
class UZombieCustomizationComponent : public UCustomizedSkeletalMesh {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<ACamperPlayer> _survivorSource;
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetZombieCustomization(ACamperPlayer* survivor);
    
    UZombieCustomizationComponent();
};

