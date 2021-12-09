#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "AuthoritativeActorPoolComponent.generated.h"

class AActor;

UCLASS(EditInlineNew)
class GAMEPLAYUTILITIES_API UAuthoritativeActorPoolComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> _actorClass;
    
    UPROPERTY(EditAnywhere)
    int32 _size;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Pool)
    TArray<AActor*> _pool;
    
    UFUNCTION()
    void OnRep_Pool(TArray<AActor*> previousPool);
    
    UFUNCTION()
    void Authority_OnActorDestroyed(AActor* destroyedActor);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UAuthoritativeActorPoolComponent();
};

