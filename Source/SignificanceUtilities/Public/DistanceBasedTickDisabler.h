#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE: Engine BHVRPerDetailModeFloat
#include "DistanceBasedTickDisabler.generated.h"

UCLASS(BlueprintType)
class SIGNIFICANCEUTILITIES_API UDistanceBasedTickDisabler : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool _autoRegisterOwner;
    
    UPROPERTY(EditAnywhere)
    bool _autoRegisterTimelines;
    
    //UPROPERTY(EditAnywhere)
    //FBHVRPerDetailModeFloat _tickDisableDistance;
    
    UPROPERTY(EditAnywhere)
    bool _insignificantWhenBehindTheCamera;
    
    UPROPERTY(Export)
    TArray<UActorComponent*> _components;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnregisterComponent(UActorComponent* component);
    
    UFUNCTION(BlueprintCallable)
    void RegisterComponent(UActorComponent* component);
    
    UDistanceBasedTickDisabler();
};

