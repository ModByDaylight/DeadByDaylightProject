#pragma once
#include "CoreMinimal.h"
#include "BasePoolableActorComponent.h"
#include "AuthoritativePoolableActorComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UAuthoritativePoolableActorComponent : public UBasePoolableActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_Acquired)
    bool _acquired;
    
public:
    UAuthoritativePoolableActorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_Acquired();
    
};

