#pragma once
#include "CoreMinimal.h"
#include "UMGFriendBaseTabListWidget.h"
#include "UMGSuggestionsListTabWidget.generated.h"

class UUMGExpandableListWidget;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGSuggestionsListTabWidget : public UUMGFriendBaseTabListWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UUMGExpandableListWidget* PlayedWithFriendsExpandableList;
    
    UPROPERTY(Export)
    UUMGExpandableListWidget* SocialFriendsExpandableList;
    
public:
    UUMGSuggestionsListTabWidget();
};

