#pragma once
#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "K26PowerOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26PowerOutlineUpdateStrategy : public UOutlineUpdateStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FLinearColor _k26ProjectileOutlineColour;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isOutlineEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isOnlyVisibleForKiller;
    
public:
    UK26PowerOutlineUpdateStrategy();
    UFUNCTION(BlueprintCallable)
    void SetOutlineVisibility(bool isActive);
    
    UFUNCTION(BlueprintPure)
    bool IsOutlineVisible() const;
    
};

