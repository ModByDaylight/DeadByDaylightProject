#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "EDBDScoreTypes.h"
#include "GameplayTagContainer.h"
#include "AchievementHandlerComponent.generated.h"

class UGeneratorRepairWithGenericPerksEscapeAchievement;
class UCamperKONextToRaisedPalletAchievement;
class AActor;

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

