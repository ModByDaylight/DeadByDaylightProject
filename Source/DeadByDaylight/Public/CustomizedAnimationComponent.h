#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "CustomizedAnimationComponent.generated.h"

class ADBDBasePlayer;
class UCustomizedSkeletalMesh;
class UAnimInstance;

UCLASS(meta=(BlueprintSpawnableComponent))
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
    
public:
    UCustomizedAnimationComponent();
private:
    UFUNCTION()
    void OnCustomizationChanged();
    
};

