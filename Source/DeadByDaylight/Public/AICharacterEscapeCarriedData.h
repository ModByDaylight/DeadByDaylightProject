#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "AICharacterEscapeCarriedData.generated.h"

UCLASS(BlueprintType)
class UAICharacterEscapeCarriedData : public UAICharacterBehaviourData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool _preventWiggleSuccess;
    
public:
    UAICharacterEscapeCarriedData();
    UFUNCTION(BlueprintCallable)
    void Init(bool preventWiggleSuccess);
    
};

