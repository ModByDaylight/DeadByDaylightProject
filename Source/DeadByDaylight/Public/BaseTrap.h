#pragma once
#include "CoreMinimal.h"
#include "Collectable.h"
#include "BaseTrap.generated.h"

UCLASS(Abstract)
class DEADBYDAYLIGHT_API ABaseTrap : public ACollectable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isTrapSet;
    
public:
    ABaseTrap();
    UFUNCTION(BlueprintCallable)
    void SetIsTrapSet(const bool value);
    
    UFUNCTION(BlueprintPure)
    bool IsTrapSet() const;
    
};

