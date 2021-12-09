#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActivationDefinition.h"
#include "Components/ActorComponent.h"
#include "Activatable.h"
#include "AuthorityDiscernedCharacter.h"
#include "DiscernibleCharacter.h"
#include "CharacterSightComponent.generated.h"

class ACharacter;

UCLASS(BlueprintType)
class GAMEPLAYUTILITIES_API UCharacterSightComponent : public UActorComponent, public IActivatable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float _minimumCharacterScreenPercent;
    
    UPROPERTY(EditAnywhere)
    float _minimumCharacterVisiblePixelsPercent;
    
    UPROPERTY(EditAnywhere)
    float _maximumSightDistance;
    
    UPROPERTY(EditAnywhere)
    float _screenVisibilityZoneRadiusPercent;
    
    UPROPERTY(EditAnywhere)
    float _sightingDelay;
    
    UPROPERTY(EditAnywhere)
    float _discerningDelay;
    
    UPROPERTY(EditAnywhere)
    float _undiscerningDelay;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ACharacter> _sightableCharacterClass;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DiscernibleCharacters)
    TArray<FAuthorityDiscernedCharacter> _discernedCharacters;
    
    UPROPERTY(Transient)
    TArray<FDiscernibleCharacter> _localDiscernibleCharacters;
    
    UPROPERTY(EditAnywhere)
    bool _debugMode;
    
    UPROPERTY(ReplicatedUsing=OnRep_CanSee)
    bool _canSee;
    
    UPROPERTY(EditAnywhere)
    FActivationDefinition _activationDefinition;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetScreenVisibilityZoneRadiusPercent(float value);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumCharacterVisiblePixelsPercent(float value);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumCharacterScreenPercent(float value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaximumSightDistance(float value);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_UpdateDiscernedCharacters(const TArray<ACharacter*>& characters);
    
    UFUNCTION()
    void OnRep_DiscernibleCharacters();
    
    UFUNCTION()
    void OnRep_CanSee();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCharacterSightComponent();
};

