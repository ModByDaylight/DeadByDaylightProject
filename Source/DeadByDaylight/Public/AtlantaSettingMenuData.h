#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EOverlayTabs.h"
#include "EOverlayMode.h"
#include "EAtlantaSettingMenuType.h"
#include "AtlantaSettingMenuData.generated.h"

USTRUCT()
struct FAtlantaSettingMenuData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOverlayTabs OverlayTab;
    
    UPROPERTY(EditAnywhere)
    EOverlayMode OverlayMode;
    
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    EAtlantaSettingMenuType MenuType;
    
    DEADBYDAYLIGHT_API FAtlantaSettingMenuData();
};

