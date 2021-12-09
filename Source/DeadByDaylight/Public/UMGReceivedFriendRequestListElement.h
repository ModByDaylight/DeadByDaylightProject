#pragma once
#include "CoreMinimal.h"
#include "UMGBaseFriendListElement.h"
#include "UMGReceivedFriendRequestListElement.generated.h"

class URichTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGReceivedFriendRequestListElement : public UUMGBaseFriendListElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    URichTextBlock* FriendRequestStatusRichText;
    
public:
    UUMGReceivedFriendRequestListElement();
};

