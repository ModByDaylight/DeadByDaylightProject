#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharmAttacherAnimationTweak.h"
#include "CharmAttacher.generated.h"

class USkeletalMeshComponent;
class ACharm;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharmAttacherOnCharmAnimationTagsChanged);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharmAttacherOnAttachedOnActor);

UCLASS()
class ACharmAttacher : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCharmAttacherOnAttachedOnActor OnAttachedOnActor;
    
    UPROPERTY(BlueprintAssignable)
    FCharmAttacherOnCharmAnimationTagsChanged OnCharmAnimationTagsChanged;
    
private:
    UPROPERTY(Export, VisibleAnywhere)
    USkeletalMeshComponent* _chain;
    
    UPROPERTY(Transient)
    ACharm* _attachedCharm;
    
public:
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMeshComponentAttachedOn();
    
    UFUNCTION(BlueprintPure)
    ACharm* GetAttachedCharm();
    
    UFUNCTION(BlueprintPure)
    FCharmAttacherAnimationTweak GetAnimationTweak();
    
    UFUNCTION(BlueprintPure)
    AActor* GetActorAttachedOn();
    
private:
    UFUNCTION()
    void DispatchOnCharmAnimationTagsChanged();
    
    UFUNCTION()
    void BindOnCharmAnimationTagsChanged();
    
public:
    ACharmAttacher();
};

