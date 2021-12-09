#pragma once
#include "CoreMinimal.h"
#include "HexPerk.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "HexUndying.generated.h"

class UGameplayModifierContainer;
class ACamperPlayer;

UCLASS()
class UHexUndying : public UHexPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _revealAuraDistanceFromTotem[3];
    
    UFUNCTION()
    void Authority_UpdateHexPerkStatusView(UGameplayModifierContainer* gameplayModifierContainer, bool isApplicable);
    
    UFUNCTION()
    void Authority_OnSurvivorAdded(ACamperPlayer* survivor);
    
    UFUNCTION()
    void Authority_OnCamperCleansedHexPerk(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);
    
public:
    UHexUndying();
};

