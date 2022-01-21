#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnBlinkStateChangedDelegate.h"
#include "BlinkComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBlinkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnBlinkStateChangedDelegate OnBlinkStateChangedDelegate;
    
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    bool _isInBlinkingState;
    
public:
    UBlinkComponent();
    UFUNCTION(BlueprintPure)
    bool IsOwnerInBlinkingState() const;
    
};

