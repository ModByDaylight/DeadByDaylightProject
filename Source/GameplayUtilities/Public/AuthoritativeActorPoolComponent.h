#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "AuthoritativeActorPoolComponent.generated.h"

class AActor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
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
    
public:
    UAuthoritativeActorPoolComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_Pool(TArray<AActor*> previousPool);
    
    UFUNCTION()
    void Authority_OnActorDestroyed(AActor* destroyedActor);
    
};

