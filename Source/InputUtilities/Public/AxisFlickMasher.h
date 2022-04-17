#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AxisFlickMasher.generated.h"

class UAxisFlick;
class UInputComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class INPUTUTILITIES_API UAxisFlickMasher : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UInputComponent* _inputComponent;
    
    UPROPERTY()
    UAxisFlick* _axisFlick1;
    
    UPROPERTY()
    UAxisFlick* _axisFlick2;
    
public:
    UAxisFlickMasher();
private:
    UFUNCTION()
    void OnAxisFlicked2();
    
    UFUNCTION()
    void OnAxisFlicked1();
    
};

