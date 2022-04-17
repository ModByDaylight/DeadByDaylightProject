#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPlayerRole.h"
#include "EInputInteractionType.h"
#include "Styling/SlateBrush.h"
#include "EButtonType.h"
#include "InteractButtonInfo.generated.h"

USTRUCT(BlueprintType)
struct FInteractButtonInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName InteractButtonID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName InteractionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlayerRole PlayerRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInputInteractionType InteractionInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Icon;
    
    UPROPERTY(EditAnywhere)
    EButtonType CancelButtonType;
    
    UPROPERTY(EditAnywhere)
    EButtonType SecondaryActionButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush AttackIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush AbilityIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ThumbJoystickUnpressedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ThumbJoystickPressedIcon;
    
    DEADBYDAYLIGHT_API FInteractButtonInfo();
};

