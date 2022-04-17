#include "AchievementHandlerComponent.h"
#include "CamperKONextToRaisedPalletAchievement.h"
#include "GeneratorRepairWithGenericPerksEscapeAchievement.h"

class AActor;

void UAchievementHandlerComponent::ReceiveGameEvent(EDBDScoreTypes scoreType, float amount, AActor* instigator, AActor* target) {
}

void UAchievementHandlerComponent::OnGameEvent(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

UAchievementHandlerComponent::UAchievementHandlerComponent() {
    this->_generatorRepairWithGenericPerksOnlyEscapeAchievement = CreateDefaultSubobject<UGeneratorRepairWithGenericPerksEscapeAchievement>(TEXT("Generic Perk Generator Repair Escape Achievement"));
    this->_camperKONextToRaisedPalletAchievement = CreateDefaultSubobject<UCamperKONextToRaisedPalletAchievement>(TEXT("Camper KO by any method next to raised pallet Achievement"));
}

