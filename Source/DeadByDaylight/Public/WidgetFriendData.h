#pragma once
#include "CoreMinimal.h"
#include "WidgetFriendData.generated.h"

class UUMGBaseFriendListElement;

USTRUCT()
struct FWidgetFriendData {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UUMGBaseFriendListElement* correspondingWidget;
    
    DEADBYDAYLIGHT_API FWidgetFriendData();
};

