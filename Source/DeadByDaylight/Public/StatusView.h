#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StatusViewSource.h"
#include "StatusView.generated.h"

class ADBDPlayer;

UCLASS()
class AStatusView : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PercentageFill;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsClockwiseTimer;
    
private:
    UPROPERTY(Transient)
    ADBDPlayer* _localDBDPlayer;
    
public:
    AStatusView();
    UFUNCTION(BlueprintNativeEvent)
    void ResetView(const ADBDPlayer* dbdPlayer);
    
    UFUNCTION(BlueprintCallable)
    void FireNotification(const FStatusViewSource statusViewSource);
    
};

