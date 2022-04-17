#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "AuthoritativeMovementComponent.generated.h"

class AActor;
class ACharacter;
class UPrimitiveComponent;
class UCapsuleComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
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
    UAuthoritativeMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};

