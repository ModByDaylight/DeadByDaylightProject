#pragma once
#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "GlyphNavMovementComponent.generated.h"

class AActor;
class UPathFollowingComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGlyphNavMovementComponent : public UNavMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(DuplicateTransient, Transient)
    AActor* _glyphOwner;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UPathFollowingComponent* _pathFollowingComponent;
    
    UPROPERTY(Transient)
    uint8 bPositionCorrected: 1;
    
private:
    UPROPERTY(EditAnywhere)
    float _maxSpeed;
    
    UPROPERTY(EditAnywhere)
    float _acceleration;
    
    UPROPERTY(EditAnywhere)
    float _deceleration;
    
    UPROPERTY(EditAnywhere)
    float _brakingDeceleration;
    
public:
    UGlyphNavMovementComponent();
    UFUNCTION(BlueprintCallable)
    void SetMaxSpeed(float maxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetDeceleration(float deceleration);
    
    UFUNCTION(BlueprintCallable)
    void SetAcceleration(float acceleration);
    
    UFUNCTION(BlueprintPure)
    AActor* GetGlyphOwner() const;
    
};

