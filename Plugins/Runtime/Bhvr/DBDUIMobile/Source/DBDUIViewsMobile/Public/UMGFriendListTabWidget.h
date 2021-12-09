#pragma once
#include "CoreMinimal.h"
#include "UMGFriendBaseTabListWidget.h"
#include "UMGFriendListTabWidget.generated.h"

class UUMGExpandableListWidget;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGFriendListTabWidget : public UUMGFriendBaseTabListWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UUMGExpandableListWidget* SentInviteToParty;
    
    UPROPERTY(Export)
    UUMGExpandableListWidget* ConnectedFriendsExpandableList;
    
    UPROPERTY(Export)
    UUMGExpandableListWidget* DisconnectedFriendsExpandableList;
    
public:
    UUMGFriendListTabWidget();
};

