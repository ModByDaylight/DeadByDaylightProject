#pragma once
#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "ShapeAnimInstance.generated.h"

class UEvilWithinComponent;

UCLASS(NonTransient)
class UShapeAnimInstance : public UKillerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isTier3Active;
    
private:
    UPROPERTY(Export, Transient)
    UEvilWithinComponent* _evilWithinComponent;
    
public:
    UShapeAnimInstance();
};

