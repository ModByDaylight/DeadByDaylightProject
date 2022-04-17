#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BHVRPerDetailModeFloat -FallbackName=BHVRPerDetailModeFloat
#include "Components/ActorComponent.h"
#include "DistanceBasedTickDisabler.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
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
    UDistanceBasedTickDisabler();
    UFUNCTION(BlueprintCallable)
    void UnregisterComponent(UActorComponent* component);
    
    UFUNCTION(BlueprintCallable)
    void RegisterComponent(UActorComponent* component);
    
};

