#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ELoadoutItemType.h"
#include "EItemRarity.h"
#include "SecretBotMatchLoadoutDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSecretBotMatchLoadoutDefinition : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 BotRank;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELoadoutItemType ItemEquipped;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EItemRarity ItemRarity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 NbAddons;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EItemRarity AddonsRarity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EItemRarity OfferingRarity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 NbGenericPerks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 NbCharacterSpecificPerks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> PerkTiersList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> CharactersIndexList;
    
    ONBOARDING_API FSecretBotMatchLoadoutDefinition();
};

