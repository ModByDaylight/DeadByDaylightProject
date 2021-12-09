#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Fadeable.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class DEADBYDAYLIGHT_API UFadeable : public UInterface {
    GENERATED_BODY()
};

class DEADBYDAYLIGHT_API IFadeable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFadeEnd(AActor* other);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFadeBegin(AActor* other);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAlphaChanged(float newAlpha, AActor* other);
    
};

