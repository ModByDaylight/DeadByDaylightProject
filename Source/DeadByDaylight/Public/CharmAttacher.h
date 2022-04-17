#pragma once
#include "CoreMinimal.h"
#include "OnCharmAnimationTagsChangedDelegate.h"
#include "GameFramework/Actor.h"
#include "OnAttachedOnActorDelegate.h"
#include "CharmAttacherAnimationTweak.h"
#include "CharmAttacher.generated.h"

class USkeletalMeshComponent;
class ACharm;

UCLASS()
class ACharmAttacher : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnAttachedOnActor OnAttachedOnActor;
    
    UPROPERTY(BlueprintAssignable)
    FOnCharmAnimationTagsChanged OnCharmAnimationTagsChanged;
    
private:
    UPROPERTY(Export, VisibleAnywhere)
    USkeletalMeshComponent* _chain;
    
    UPROPERTY(Transient)
    ACharm* _attachedCharm;
    
public:
    ACharmAttacher();
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
    
};

