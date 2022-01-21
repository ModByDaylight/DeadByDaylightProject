#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractionStarterComponent.generated.h"

class UInteractionDefinition;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UInteractionStarterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Replicated, Transient)
    UInteractionDefinition* _interaction;
    
    UPROPERTY(ReplicatedUsing=OnRep_ShouldStartInteraction)
    bool _shouldStartInteraction;
    
public:
    UInteractionStarterComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_ShouldStartInteraction();
    
    UFUNCTION()
    void OnInteractionStarted();
    
};

