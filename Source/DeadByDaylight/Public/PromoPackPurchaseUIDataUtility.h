#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PromoPackPurchaseUIData.h"
#include "PromoPackPurchaseUIDataUtility.generated.h"

UCLASS(BlueprintType)
class UPromoPackPurchaseUIDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPromoPackPurchaseUIDataUtility();
private:
    UFUNCTION(BlueprintCallable)
    static void SetRemainingTimeFromHours(UPARAM(Ref) FPromoPackPurchaseUIData& data, int32 remainHours);
    
};

