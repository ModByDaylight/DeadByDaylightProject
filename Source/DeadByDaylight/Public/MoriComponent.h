#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "MoriComponent.generated.h"

class UInteractionDefinition;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMoriComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UInteractionDefinition>> _moriInteractionClasses;
    
public:
    UMoriComponent();
    UFUNCTION(BlueprintCallable)
    void OnMoriUpdateStart();
    
    UFUNCTION(BlueprintCallable)
    void OnMoriFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnMoriChargeCompleted();
    
};

