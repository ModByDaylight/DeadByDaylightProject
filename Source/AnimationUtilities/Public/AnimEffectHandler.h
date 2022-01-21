#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnimEffectHandler.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class ANIMATIONUTILITIES_API UAnimEffectHandler : public UObject {
    GENERATED_BODY()
public:
    UAnimEffectHandler();
    UFUNCTION(BlueprintNativeEvent)
    bool HandleAnimNotify(ACharacter* player, const FName& notifyName) const;
    
};

