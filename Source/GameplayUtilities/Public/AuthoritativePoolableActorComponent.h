#pragma once
#include "CoreMinimal.h"
#include "BasePoolableActorComponent.h"
#include "AuthoritativePoolableActorComponent.generated.h"

UCLASS(EditInlineNew)
class GAMEPLAYUTILITIES_API UAuthoritativePoolableActorComponent : public UBasePoolableActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_Acquired)
    bool _acquired;
    
    UFUNCTION()
    void OnRep_Acquired();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UAuthoritativePoolableActorComponent();
};

