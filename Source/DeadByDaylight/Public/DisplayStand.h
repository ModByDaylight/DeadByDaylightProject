#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CharacterDropdown.h"
#include "DisplayStand.generated.h"

class ACharm;

UCLASS()
class DEADBYDAYLIGHT_API ADisplayStand : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AActor* _currentActorDisplayed;
    
private:
    UPROPERTY()
    UClass* _currentActorDisplayedClass;
    
    UPROPERTY()
    UClass* _nextActorToDisplayClass;
    
    UPROPERTY(EditInstanceOnly)
    TMap<UClass*, FTransform> _offsetByClass;
    
    UPROPERTY(EditInstanceOnly)
    TMap<UClass*, bool> _enableRotationByClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<ACharm> _defaultCharmClassDisplayable;
    
    UPROPERTY(EditInstanceOnly)
    bool _useOffsetMenuAnimations;
    
    UPROPERTY(EditInstanceOnly)
    bool _displayDummyCharacter;
    
    UPROPERTY(EditAnywhere)
    FCharacterDropdown _characterDropdown;
    
public:
    ADisplayStand();
private:
    UFUNCTION()
    void OnCurrentActorDestroyed(AActor* destroyedActor);
    
};

