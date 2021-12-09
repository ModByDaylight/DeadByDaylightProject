#pragma once
#include "CoreMinimal.h"
#include "UMGFriendBaseTabListWidget.h"
#include "UMGRequestsListTabWidget.generated.h"

class UUMGExpandableListWidget;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGRequestsListTabWidget : public UUMGFriendBaseTabListWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UUMGExpandableListWidget* FriendRequestExpandableList;
    
    UPROPERTY(Export)
    UUMGExpandableListWidget* PendingExpandableList;
    
public:
    UUMGRequestsListTabWidget();
};

