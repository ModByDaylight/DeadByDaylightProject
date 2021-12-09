#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESightStatus.h"
#include "DelegateHandleWrapper.h"
#include "CharacterSightableComponent.generated.h"

class ACharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterSightableComponentOnHighestSightStatusChangedBP, ESightStatus, status);

UCLASS(BlueprintType)
class GAMEPLAYUTILITIES_API UCharacterSightableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCharacterSightableComponentOnHighestSightStatusChangedBP OnHighestSightStatusChangedBP;
    
private:
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<ACharacter>, FDelegateHandleWrapper> _sightDelegateHandles;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<ACharacter>, ESightStatus> _sightersStatus;
    
public:
    UFUNCTION(BlueprintPure)
    ESightStatus GetHighestSightStatus() const;
    
    UCharacterSightableComponent();
};

