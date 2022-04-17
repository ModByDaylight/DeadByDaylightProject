#pragma once
#include "CoreMinimal.h"
#include "BaseItemData.h"
#include "EItemHandPosition.h"
#include "ELoadoutItemType.h"
#include "EPlayerRole.h"
#include "ItemAvailability.h"
#include "EKillerAbilities.h"
#include "EItemRarity.h"
#include "ItemData.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FItemData : public FBaseItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> ItemMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EItemHandPosition HandPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlayerRole Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EItemRarity Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Chest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EKillerAbilities RequiredKillerAbility;
    
    UPROPERTY(EditAnywhere)
    FItemAvailability Availability;
    
    UPROPERTY(EditAnywhere)
    bool IsInNonViolentBuild;
    
    UPROPERTY(EditAnywhere)
    bool IsAvailableInAtlantaBuild;
    
    UPROPERTY(EditAnywhere)
    bool AntiDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Bloodweb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanKeepInLoadout;
    
    UPROPERTY(EditAnywhere)
    FName EventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanUseAfterEventEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELoadoutItemType ItemType;
    
    FItemData();
};

