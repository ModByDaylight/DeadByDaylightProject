#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoriableComponent.generated.h"

class UInteractionDefinition;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UMoriableComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_MoriInteractions)
    TArray<UInteractionDefinition*> _moriInteractions;
    
    UFUNCTION()
    void OnRep_MoriInteractions();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMoriUpdateStart();
    
    UFUNCTION(BlueprintCallable)
    void OnMoriFinished();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UMoriableComponent();
};

