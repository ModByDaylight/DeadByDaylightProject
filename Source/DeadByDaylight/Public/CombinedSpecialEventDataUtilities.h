#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "CombinedSpecialEventData.h"
#include "CombinedSpecialEventDataUtilities.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UCombinedSpecialEventDataUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCombinedSpecialEventDataUtilities();
    UFUNCTION(BlueprintPure)
    static FName GetSpecialMusicState(const FCombinedSpecialEventData& data);
    
    UFUNCTION(BlueprintPure)
    static FColor GetObjectOutlineColour(const FCombinedSpecialEventData& data);
    
};

