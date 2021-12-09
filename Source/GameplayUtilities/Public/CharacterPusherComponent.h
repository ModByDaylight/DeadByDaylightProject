#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterPusherComponent.generated.h"

class ACharacter;
class UBasePushStrategyComponent;
class UCapsuleComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(BlueprintType)
class GAMEPLAYUTILITIES_API UCharacterPusherComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<ACharacter*> _charactersToPush;
    
    UPROPERTY(Transient)
    TSet<ACharacter*> _ignoredCharacters;
    
private:
    UPROPERTY(Export)
    UCapsuleComponent* _characterDetector;
    
    UPROPERTY(Export)
    UCapsuleComponent* _characterCollision;
    
    UPROPERTY(Export)
    UBasePushStrategyComponent* _pushStrategy;
    
    UPROPERTY(Transient)
    TArray<ACharacter*> _ignoredByPushedCharacters;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIgnoredCharacter(ACharacter* character, const bool ignore);
    
protected:
    UFUNCTION()
    void OnCharacterDetectorOverlapExit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void Construct(UCapsuleComponent* characterDetector, UCapsuleComponent* characterCollision, UBasePushStrategyComponent* pushStrategy);
    
    UCharacterPusherComponent();
};

