#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ColorBlindFunctionLibrary.generated.h"

class AActor;

UCLASS(BlueprintType)
class UColorBlindFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UColorBlindFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static void CallOnColorBlindSettingsChange(AActor* callingActor);
    
};

