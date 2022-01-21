#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseModifierCondition.generated.h"

class UBaseModifierContainer;
class UModifierSubjectProvider;
class AActor;

UCLASS(Abstract, Blueprintable, meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UBaseModifierCondition : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_OwningModifier)
    UBaseModifierContainer* _owningModifier;
    
    UPROPERTY()
    UModifierSubjectProvider* _subjectProvider;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SubjectProviderClass)
    UClass* _subjectProviderClass;
    
public:
    UBaseModifierCondition();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetSubjectProviderClass(UClass* subjectProviderClass);
    
private:
    UFUNCTION()
    void OnRep_SubjectProviderClass();
    
    UFUNCTION()
    void OnRep_OwningModifier();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void InitializeSubjectProviderClass();
    
public:
    UFUNCTION(BlueprintPure)
    AActor* GetOwningActor() const;
    
};

