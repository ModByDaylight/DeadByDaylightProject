#pragma once
#include "CoreMinimal.h"
#include "ELinkedVomitState.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "VomitStateComponent.generated.h"

class UGameplayTagContainerComponent;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UVomitStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FTagStateBool _isCharging;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVomitState(ELinkedVomitState newVomitState);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectState(UGameplayTagContainerComponent* objectState);
    
    UFUNCTION(BlueprintPure)
    bool IsVomiting() const;
    
    UFUNCTION(BlueprintPure)
    ELinkedVomitState getVomitState() const;
    
    UVomitStateComponent();
};

