#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "CustomizedAnimationComponent.generated.h"

class UCustomizedSkeletalMesh;
class ADBDBasePlayer;
class UAnimInstance;

UCLASS()
class DEADBYDAYLIGHT_API UCustomizedAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ADBDBasePlayer* _owner;
    
    UPROPERTY(Export, Transient)
    UCustomizedSkeletalMesh* _customizedSkeletalMesh;
    
    UPROPERTY(Transient)
    TSubclassOf<UAnimInstance> _defaultAnimClass;
    
    UFUNCTION()
    void OnCustomizationChanged();
    
public:
    UCustomizedAnimationComponent();
};

