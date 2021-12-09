#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AkExternalSourceInfo.h"
#include "EAkCallbackType.h"
#include "PostEventAsync.generated.h"

class UAkCallbackInfo;
class UPostEventAsync;
class UObject;
class UAkAudioEvent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FPostEventAsyncPostEventCallback, EAkCallbackType, CallbackType, UAkCallbackInfo*, CallbackInfo);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPostEventAsyncCompleted, int32, PlayingID);

UCLASS()
class AKAUDIO_API UPostEventAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPostEventAsyncCompleted Completed;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UPostEventAsync* PostEventAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FPostEventAsyncPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed);
    
private:
    UFUNCTION()
    void PollPostEventFuture();
    
public:
    UPostEventAsync();
};

