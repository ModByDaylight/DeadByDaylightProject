#pragma once
#include "CoreMinimal.h"
#include "CustomWidgetWrapper.h"
#include "CustomWidgetWrapper_InGame.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UCustomWidgetWrapper_InGame : public UCustomWidgetWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 VirtualJoystickIndex;
    
    UCustomWidgetWrapper_InGame();
    UFUNCTION()
    void UpdateSettings();
    
};

