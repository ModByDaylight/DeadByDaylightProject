#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UObject/NoExportTypes.h"
#include "PostEventAtLocationAsync.generated.h"

class UPostEventAtLocationAsync;
class UObject;
class UAkAudioEvent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPostEventAtLocationAsyncCompleted, int32, PlayingID);

UCLASS()
class AKAUDIO_API UPostEventAtLocationAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPostEventAtLocationAsyncCompleted Completed;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UPostEventAtLocationAsync* PostEventAtLocationAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation);
    
private:
    UFUNCTION()
    void PollPostEventFuture();
    
public:
    UPostEventAtLocationAsync();
};

