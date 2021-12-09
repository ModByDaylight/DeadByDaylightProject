#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterCollection.generated.h"

class ACharacter;
class ASlasherPlayer;
class ACamperPlayer;
class ADBDPlayer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UCharacterCollection : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ASlasherPlayer* _killer;
    
    UPROPERTY(Transient)
    TSet<ACamperPlayer*> _survivors;
    
    UPROPERTY(Transient)
    TSet<ADBDPlayer*> _mainDBDPlayers;
    
    UPROPERTY(Transient)
    TSet<ADBDPlayer*> _otherCharacters;
    
    UPROPERTY(Transient)
    TSet<ACharacter*> _nonPlayableCharacters;
    
    UPROPERTY(Transient)
    TSet<ACharacter*> _allCharacters;
    
public:
    UFUNCTION(BlueprintPure)
    TSet<ACamperPlayer*> GetSurvivors() const;
    
    UFUNCTION(BlueprintPure)
    TSet<ADBDPlayer*> GetMainDBDPlayers() const;
    
    UFUNCTION(BlueprintPure)
    ASlasherPlayer* GetKiller() const;
    
    UFUNCTION(BlueprintPure)
    TArray<ADBDPlayer*> GetAllDBDPlayers() const;
    
    UCharacterCollection();
};

