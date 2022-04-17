#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EKnowledgeSharingType.h"
#include "ActorKnowledgeCollection.generated.h"

class ACharacter;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorKnowledgeCollection : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    TArray<AActor*> _actors;
    
    UPROPERTY(Replicated, Transient)
    bool _available;
    
    UPROPERTY(Replicated, Transient)
    ACharacter* _possessor;
    
    UPROPERTY(Replicated, Transient)
    EKnowledgeSharingType _sharing;
    
public:
    UActorKnowledgeCollection();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Local_SetAvailable(bool value);
    
    UFUNCTION(BlueprintPure)
    bool IsAvailable(const ACharacter* character) const;
    
    UFUNCTION(BlueprintPure)
    bool Contains(AActor* actor) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetSharingType(EKnowledgeSharingType value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetPossessor(ACharacter* possessor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetAvailable(bool value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_Remove(AActor* actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_Empty();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_Append(const TArray<AActor*>& actors);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Authority_Add(AActor* actor);
    
};

