#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "BetterTogether.generated.h"

class ADBDPlayer;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBetterTogether : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool ShouldRevealKiller;
    
    UPROPERTY(EditDefaultsOnly)
    bool ShouldRevealSurvivors;
    
    UPROPERTY(EditDefaultsOnly)
    float RevealDistance;
    
    UPROPERTY()
    TArray<ADBDPlayer*> _affectedCampers;
    
private:
    UPROPERTY(Transient)
    AActor* _genToReveal;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    float _durationByLevel[3];
    
public:
    UBetterTogether();
private:
    UFUNCTION()
    void OnStartedGeneratorRepair(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);
    
};

