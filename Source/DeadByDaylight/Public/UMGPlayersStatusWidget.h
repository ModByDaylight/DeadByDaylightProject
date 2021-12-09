#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EPlayerRole.h"
#include "CustomizedHudPlayerWrapperIdMapContainer.h"
#include "UMGPlayersStatusWidget.generated.h"

class UUMGPlayerStatusIcon;
class UHorizontalBox;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPlayersStatusWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<EPlayerRole, FCustomizedHudPlayerWrapperIdMapContainer> CustomizedHudWrapperIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UUMGPlayerStatusIcon> PlayerStatusIconClass;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* playersContainer;
    
private:
    UPROPERTY(Export, Transient)
    TMap<FString, UUMGPlayerStatusIcon*> playerIconsByName;
    
    UFUNCTION()
    void OnPlayerStatusClicked(UUMGPlayerStatusIcon* playerStatusIcon);
    
public:
    UUMGPlayersStatusWidget();
};

