#pragma once
#include "CoreMinimal.h"
#include "ESightStatus.h"
#include "Components/ActorComponent.h"
#include "DelegateHandleWrapper.h"
#include "CharacterSightableComponent.generated.h"

class ACharacter;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UCharacterSightableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHighestSightStatusChangedBP, ESightStatus, status);
    
    UPROPERTY(BlueprintAssignable)
    FOnHighestSightStatusChangedBP OnHighestSightStatusChangedBP;
    
private:
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<ACharacter>, FDelegateHandleWrapper> _sightDelegateHandles;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<ACharacter>, ESightStatus> _sightersStatus;
    
public:
    UCharacterSightableComponent();
    UFUNCTION(BlueprintPure)
    ESightStatus GetHighestSightStatus() const;
    
};

