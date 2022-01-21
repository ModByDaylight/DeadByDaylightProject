#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESpecialEventStatus.h"
#include "CombinedSpecialEventData.h"
#include "SpecialEventManager.generated.h"

class USpecialEventsContainer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API USpecialEventManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    USpecialEventsContainer* _specialEventsContainer;
    
public:
    USpecialEventManager();
    UFUNCTION(BlueprintPure)
    static ESpecialEventStatus GetStatus(const FCombinedSpecialEventData& specialEventData);
    
    UFUNCTION(BlueprintPure)
    static bool GetSpecialEvent(UObject* worldContextObject, const FName eventId, FCombinedSpecialEventData& outSpecialEventData);
    
    UFUNCTION(BlueprintPure)
    static bool GetCurrentSpecialEvent(const UObject* worldContextObject, FCombinedSpecialEventData& outSpecialEventData);
    
};

