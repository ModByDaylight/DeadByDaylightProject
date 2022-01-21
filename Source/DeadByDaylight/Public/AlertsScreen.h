#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "AlertsScreen.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UAlertsScreen : public UScreenBase {
    GENERATED_BODY()
public:
    UAlertsScreen();
private:
    UFUNCTION()
    void RewardAlertSequenceCompleted() const;
    
};

