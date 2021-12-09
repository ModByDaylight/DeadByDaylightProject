#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EMainMenuButton.h"
#include "MainMenuButtonData.generated.h"

USTRUCT(BlueprintType)
struct FMainMenuButtonData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMainMenuButton ButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText InfoTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText InfoDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText LockedInfoTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText LockedInfoDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsHidden;
    
    DEADBYDAYLIGHT_API FMainMenuButtonData();
};

