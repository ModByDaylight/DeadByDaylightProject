#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PostEventAtLocationAsyncOutputPinDelegate.h"
#include "UObject/NoExportTypes.h"
#include "PostEventAtLocationAsync.generated.h"

class UAkAudioEvent;
class UPostEventAtLocationAsync;
class UObject;

UCLASS()
class AKAUDIO_API UPostEventAtLocationAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPostEventAtLocationAsyncOutputPin Completed;
    
    UPostEventAtLocationAsync();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UPostEventAtLocationAsync* PostEventAtLocationAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation);
    
private:
    UFUNCTION()
    void PollPostEventFuture();
    
};

