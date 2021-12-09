#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlinkComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlinkComponentOnBlinkStateChangedDelegate, bool, isInBlinkingState);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UBlinkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBlinkComponentOnBlinkStateChangedDelegate OnBlinkStateChangedDelegate;
    
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    bool _isInBlinkingState;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOwnerInBlinkingState() const;
    
    UBlinkComponent();
};

