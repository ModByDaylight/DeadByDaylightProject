#pragma once
#include "CoreMinimal.h"
#include "EDBDScoreTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "AchievementHandlerComponent.generated.h"

class AActor;
class UGeneratorRepairWithGenericPerksEscapeAchievement;
class UCamperKONextToRaisedPalletAchievement;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UAchievementHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UGeneratorRepairWithGenericPerksEscapeAchievement* _generatorRepairWithGenericPerksOnlyEscapeAchievement;
    
    UPROPERTY(Export)
    UCamperKONextToRaisedPalletAchievement* _camperKONextToRaisedPalletAchievement;
    
public:
    UAchievementHandlerComponent();
    UFUNCTION()
    void ReceiveGameEvent(EDBDScoreTypes scoreType, float amount, AActor* instigator, AActor* target);
    
    UFUNCTION()
    void OnGameEvent(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

