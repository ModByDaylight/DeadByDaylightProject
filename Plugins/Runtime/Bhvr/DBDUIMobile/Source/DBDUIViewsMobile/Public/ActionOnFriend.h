#pragma once
#include "CoreMinimal.h"
#include "EActionOnFriendType.h"
#include "AtlantaFriendUIData.h"
#include "ActionOnFriend.generated.h"

class UUMGBaseFriendListElement;

USTRUCT(BlueprintType)
struct FActionOnFriend {
    GENERATED_BODY()
public:
    UPROPERTY()
    EActionOnFriendType ActionToProceed;
    
    UPROPERTY()
    FAtlantaFriendUIData AtlantaFriendDataToUpdate;
    
    UPROPERTY(Export)
    UUMGBaseFriendListElement* ActionOwner;
    
    DBDUIVIEWSMOBILE_API FActionOnFriend();
};

