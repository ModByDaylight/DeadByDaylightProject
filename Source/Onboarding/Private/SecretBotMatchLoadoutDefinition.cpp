#include "SecretBotMatchLoadoutDefinition.h"

FSecretBotMatchLoadoutDefinition::FSecretBotMatchLoadoutDefinition() {
    this->BotRank = 0;
    this->ItemEquipped = ELoadoutItemType::None;
    this->ItemRarity = EItemRarity::Common;
    this->NbAddons = 0;
    this->AddonsRarity = EItemRarity::Common;
    this->OfferingRarity = EItemRarity::Common;
    this->NbGenericPerks = 0;
    this->NbCharacterSpecificPerks = 0;
}

