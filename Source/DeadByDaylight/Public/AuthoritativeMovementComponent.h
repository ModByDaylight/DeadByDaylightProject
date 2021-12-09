#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "AuthoritativeMovementComponent.generated.h"

class ACharacter;
class UCapsuleComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UAuthoritativeMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<ACharacter*> _charactersToPush;
    
    UPROPERTY(Transient)
    TArray<ACharacter*> _stopIgnoreCharacterOnEndOverlap;
    
    UPROPERTY(Export, Transient)
    UCapsuleComponent* _pawnDetector;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AuthoritativeIgnoreOverlapCharacters)
    TArray<ACharacter*> _authoritativeIgnoreOverlapCharacters;
    
    UPROPERTY(Transient)
    TArray<ACharacter*> _previousAuthoritativeIgnoreOverlapCharacters;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPawnDetector(UCapsuleComponent* pawnDetector);
    
private:
    UFUNCTION()
    void OnRep_AuthoritativeIgnoreOverlapCharacters();
    
protected:
    UFUNCTION()
    void OnPawnDetectorOverlapExit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnPawnDetectorOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UAuthoritativeMovementComponent();
};

